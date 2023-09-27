#include "firstlib.h";

struct Studentas{
    string vardas;
    string pavarde;
    vector <int> ND;
    int Egz;
    double galutinis1;
    double galutinis2;
};
//------------------------

//------------------------
double rezultatas(double suma,int kiekis,int egz)
{
    double rez=0;
    rez=0.4*(suma/kiekis)+0.6*egz;
    return rez;
}
//-------------------------

//-------------------------
double Med(vector<int> data)
{
    sort(data.begin(), data.end());
    size_t size = data.size();
    if (size % 2 == 0) {
        size_t middle = size / 2;
        return (data[middle - 1] + data[middle]) / 2.0;
    } else {
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
    int stud_sk;
    vector<Studentas> studentai;
    cout<<"Pasirinkite buda, kaip pildysite duomenys. Jeigu norit ivesti patys rasykite 'P', jeigu norite nuskaityti is failo - 'F'"<<endl;
    char pasirinkimas3;
    cin>>pasirinkimas3;
    if(pasirinkimas3=='P'){
    cout<<"Iveskite studentu kieki: "<<endl;
    cin>>stud_sk;
    cout<<"Pasirinkite buda, kaip pildysite namu darbo pazimius. Jeigu norit ivesti patys rasykite 'A', jeigu atsitiktinai - rasykite 'R'"<<endl;
    char pasirinkimas2;
    cin>>pasirinkimas2;
    //Duomenu ivedimas
    for(int i=0;i<stud_sk;i++)
    {
        Studentas naujas_st;
        cout<<"Iveskite "<<i+1<<" studento varda"<<endl;
        cin>>naujas_st.vardas;
        cout<<"Iveskite "<<i+1<<" studento pavarde"<<endl;
        cin>>naujas_st.pavarde;
        if (pasirinkimas2=='A'){
        cout<<"Iveskite "<<i+1<<" studento namu darbo rezultatus (iveskite '-1', kai baigsite)"<<endl;
        int nd_rez;
        while(true)
        {
           cin>>nd_rez;
           if(nd_rez == -1)
              {
                  break;
              }
           naujas_st.ND.push_back(nd_rez);
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
        {cout<<"Neteisingas pasirinkimas";
        return 1;
        }
        if (pasirinkimas2=='A'){
        cout<<"Iveskite "<<i+1<<" studento egzamino rezultata"<<endl;
        cin>>naujas_st.Egz;}
        else if(pasirinkimas2=='R'){
             naujas_st.Egz=rand()%10+1;
             cout<<"Sugeneruotas Egzamino rezultatas"<<" "<<naujas_st.Egz<<endl;
        }
        else{
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
        ifstream input_file("kursiokai.txt");
        input_file>>stud_sk;
        cout<<stud_sk<<endl;
        int nd_kiekis;
        input_file>>nd_kiekis;
        cout<<nd_kiekis<<endl;
        input_file.ignore();
        string v;
        input_file>>v;
        cout<<v<<" ";
        string p;
        input_file>>p;
        cout<<p<<" ";
        for(int i=0;i<nd_kiekis;i++)
        {
            string nd;
            input_file>>nd;
            cout<<nd<<" ";
        }
        string egz;
        input_file>>egz;
        cout<<egz<<endl;
        for (int i = 0; i < stud_sk; i++)
            {
            Studentas naujas_st;
            input_file>>naujas_st.vardas>>naujas_st.pavarde;
            naujas_st.ND.clear();
            for(int i=0;i<nd_kiekis;i++)
            {
                int nd_rez;
                input_file>>nd_rez;
                naujas_st.ND.push_back(nd_rez);
            }
            input_file>>naujas_st.Egz;
            double nd_suma = accumulate(naujas_st.ND.begin(), naujas_st.ND.end(), 0.0);
            naujas_st.galutinis1 = rezultatas(nd_suma, naujas_st.ND.size(), naujas_st.Egz);
            double mediana = Med(naujas_st.ND);
            naujas_st.galutinis2 = rezMed(mediana, naujas_st.Egz);
            studentai.push_back(naujas_st);
            }
        input_file.close();
    }
    else
    {
        cout<<"Neteisingas pasirinkimas"<<endl;
    }
    sort(studentai.begin(),studentai.end(),palyginimasVardai);
    char pasirinkimas;
    cout<<"Jeigu norite gauti galutini bala su vidurkiu - parasykite 'V' raide, jeigu su mediana - 'M'"<<endl;
    cin>>pasirinkimas;
    //Duomenu isvedimas
    cout<<setw(20)<<left<<"Vardas"<<setw(20)<<"Pavarde"<<setw(20)<<left;
    if (pasirinkimas=='V'){
            cout<<"Galutinis(Vid.)"<<endl;}
    else if(pasirinkimas=='M'){
            cout<<"Galutinis(Med.)"<<endl;}
    else {cout<<"Neteisingas pasirinkimas";
    return 1;}
    cout<<"------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<stud_sk;i++)
    {
        cout<<setw(20)<<left<<studentai[i].vardas<<setw(20)<<left<<studentai[i].pavarde<<setw(20)<<left;
        if (pasirinkimas=='V'){
                cout<<fixed<<setprecision(2)<<studentai[i].galutinis1<<endl;}
        else cout<<fixed<<setprecision(2)<<studentai[i].galutinis2<<endl;
    }
    return 0;
}
