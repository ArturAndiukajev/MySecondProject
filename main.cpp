#include "firstlib.h"
//------------------------
double rezultatas(double suma,int kiekis,int egz)
{
    double rez=0;
    try
    {
        if (kiekis == 0)
        {
            throw std::invalid_argument("Kiekis negali buti lygus nuliui");
        }}
    catch (const std::exception& e)
    {
        cout << "Dalyba is nulio. " << e.what() << endl;
    }
    rez=0.4*(suma/kiekis)+0.6*egz;
    return rez;
}
//-------------------------

//-------------------------
double Med(vector<int> data)
{
    sort(data.begin(), data.end());
    size_t size = data.size();
    if (size % 2 == 0)
    {
        size_t middle = size / 2;
        return (data[middle - 1] + data[middle]) / 2.0;
    }
    else
    {
        return data[size / 2];
    }
}
//----------------------------

//----------------------------
double rezMed(double mediana, int egz)
{
    double rez=0;
    rez=0.4*mediana+0.6*egz;
    return rez;
}
//------------------------------

bool palyginimasVardai(Studentas studentas1, Studentas studentas2)
{
    return studentas1.vardas<studentas2.vardas;
}
//--------------------------------
int main()
{
    int stud_sk=0;
    vector <Studentas> studentai;
    Studentas naujas_st;
    cout<<"Pasirinkite buda, kaip pildysite duomenys. Jeigu norit ivesti patys rasykite 'P', jeigu norite nuskaityti is failo - 'F'"<<endl;
    char pasirinkimas3;
    cin>>pasirinkimas3;
    if(pasirinkimas3=='P')
    {
        cout<<"Iveskite studentu kieki: "<<endl;
        cin>>stud_sk;
        cout<<"Pasirinkite buda, kaip pildysite namu darbo pazimius. Jeigu norit ivesti patys rasykite 'A', jeigu atsitiktinai - rasykite 'R'"<<endl;
        char pasirinkimas2;
        cin>>pasirinkimas2;
    //------------------------------------------------Duomenu ivedimas----------------------------------------------------------------------------------
        for(int i=0;i<stud_sk;i++)
        {
            cout<<"Iveskite "<<i+1<<" studento varda"<<endl;
            cin>>naujas_st.vardas;
            cout<<"Iveskite "<<i+1<<" studento pavarde"<<endl;
            cin>>naujas_st.pavarde;
            if (pasirinkimas2=='A')
            {
                cout<<"Iveskite "<<i+1<<" studento namu darbo rezultatus (iveskite '-1', kai baigsite)"<<endl;
                int nd_rez;
                while (true)
                {
                    if (cin >> nd_rez)
                    {
                        if (nd_rez == -1)
                        {
                            break;
                        }
                        else
                        {
                            naujas_st.ND.push_back(nd_rez);
                        }
                    }
                    else
                    {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Tai ne skaicius." << endl;
                    }
                }}
            else if(pasirinkimas2=='R')
            {
                int nd_kiekis;
                cout<<"iveskite kiek namu darbu rezultatu noresite sugeneruoti"<<endl;
                cin>>nd_kiekis;
                cout<<"Sugeneruoti namu darbu rezultatai:"<<endl;
                for(int i=0;i<nd_kiekis;i++)
                {
                    int nd_rez;
                    nd_rez=rand()%10+1;
                    cout<<nd_rez<<endl;
                    naujas_st.ND.push_back(nd_rez);
                }
            }
            else
            {
                cout<<"Neteisingas pasirinkimas";
                return 1;
            }
            if (pasirinkimas2=='A')
            {
                cout<<"Iveskite "<<i+1<<" studento egzamino rezultata"<<endl;
                cin>>naujas_st.Egz;}
            else if(pasirinkimas2=='R')
            {
                naujas_st.Egz=rand()%10+1;
                cout<<"Sugeneruotas Egzamino rezultatas"<<" "<<naujas_st.Egz<<endl;
            }
            else
            {
                cout<<"Neteisingas pasirinkimas";
                return 1;
            }
        double nd_suma = accumulate(naujas_st.ND.begin(), naujas_st.ND.end(), 0.0);
        naujas_st.galutinis1=rezultatas(nd_suma, naujas_st.ND.size(), naujas_st.Egz);
        double mediana=Med(naujas_st.ND);
        naujas_st.galutinis2=rezMed(mediana,naujas_st.Egz);
        studentai.push_back(naujas_st);
        }}
    else if(pasirinkimas3=='F')
    {
        string Fname;
        cout<<"Iveskite failo pavadinima su '.txt'"<<endl;
        cin>>Fname;
        ifstream input_file(Fname);
        if (!input_file.is_open())
        {
            cout << "Failo atidarymas negalimas: " << Fname << endl;
            return 1;
        }
        string header;
        int stulp_kiekis=0;
        getline(input_file, header);
        string v;
        string p;
        std::istringstream headerStream(header);
        string token;
        while (headerStream >> token)
        {
            stulp_kiekis++;
        }
        while (input_file >> v >> p)
        {
            Studentas naujas_st;
            naujas_st.vardas = v;
            naujas_st.pavarde = p;
            for(int i=0;i<stulp_kiekis-3;i++)
            {
                int nd;
                if (!(input_file >> nd))
                {
                    cout << "Nepavyko perskaityti namu darbo rezultato is failo." << endl;
                    return 1;
                }
                naujas_st.ND.push_back(nd);
            }
            if (!(input_file >> naujas_st.Egz))
            {
                cout << "Nepavyko perskaityti egzamino rezultato is failo." << endl;
                return 1;
            }
            double nd_suma = accumulate(naujas_st.ND.begin(), naujas_st.ND.end(), 0.0);
            naujas_st.galutinis1 = rezultatas(nd_suma, naujas_st.ND.size(), naujas_st.Egz);
            double mediana = Med(naujas_st.ND);
            naujas_st.galutinis2 = rezMed(mediana, naujas_st.Egz);
            studentai.push_back(naujas_st);
            stud_sk++;
        }
        input_file.close();
    }
    else
    {
        cout<<"Neteisingas pasirinkimas"<<endl;
        return 0;
    }
    sort(studentai.begin(),studentai.end(),palyginimasVardai);
    char pasirinkimas;
    cout<<"Jeigu norite gauti galutini bala su vidurkiu - parasykite 'V' raide, jeigu su mediana - 'M'"<<endl;
    cin>>pasirinkimas;
    //---------------------------------------------------------Duomenu isvedimas----------------------------------------------------------
    char pasirinkimas4;
    cout<<"Jeigu norite gauti rezultata ekrane rasykite 'E', jeigu faile 'F'"<<endl;
    cin>>pasirinkimas4;
    if(pasirinkimas4=='E')
    {
        cout<<setw(20)<<left<<"Vardas"<<setw(20)<<"Pavarde"<<setw(20)<<left;
        if (pasirinkimas=='V')
        {
            cout<<"Galutinis(Vid.)"<<endl;
        }
        else if(pasirinkimas=='M')
        {
            cout<<"Galutinis(Med.)"<<endl;
        }
        else
        {
            cout<<"Neteisingas pasirinkimas";
            return 1;
        }
        cout<<"------------------------------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<stud_sk;i++)
        {
            cout<<setw(20)<<left<<studentai[i].vardas<<setw(20)<<left<<studentai[i].pavarde<<setw(20)<<left;
            if (pasirinkimas=='V')
            {
                cout<<fixed<<setprecision(2)<<studentai[i].galutinis1<<endl;
            }
            else cout<<fixed<<setprecision(2)<<studentai[i].galutinis2<<endl;
        }}
    else if(pasirinkimas4=='F')
    {
        ofstream outputFile("rezultatai.txt");
        outputFile <<setw(20)<<left<<"Vardas"<<setw(20)<<"Pavarde"<<setw(20)<<left;
        if (pasirinkimas=='V')
        {
            outputFile<<"Galutinis(Vid.)"<<endl;
        }
        else if(pasirinkimas=='M')
        {
            outputFile<<"Galutinis(Med.)"<<endl;
        }
        else
        {   cout<<"Neteisingas pasirinkimas";
            return 1;
        }
        outputFile<<"------------------------------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<stud_sk;i++)
        {
            outputFile<<setw(20)<<left<<studentai[i].vardas<<setw(20)<<left<<studentai[i].pavarde<<setw(20)<<left;
            if (pasirinkimas=='V')
                {
                    outputFile<<fixed<<setprecision(2)<<studentai[i].galutinis1<<endl;
                }
            else    outputFile<<fixed<<setprecision(2)<<studentai[i].galutinis2<<endl;
        }
        outputFile.close();
    }
    return 0;
}
