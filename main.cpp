#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


struct Studentas{
    string vardas;
    string pavarde;
    vector <int> ND;
    int Egz;
    double galutinis;
};
//------------------------

//------------------------
double rezultatas(double suma,int kiekis,int egz)
{
    double rez=0;
    rez=0.4*(suma/kiekis)+0.6*egz;
    return rez;
}

int main()
{
    int stud_sk;
    vector<Studentas> studentai;

    cout<<"Iveskite studentu kieki: "<<endl;
    cin>>stud_sk;
    //Duomenu ivedimas
    for(int i=0;i<stud_sk;i++)
    {
        Studentas naujas_st;
        cout<<"Iveskite "<<i+1<<" studento varda"<<endl;
        cin>>naujas_st.vardas;
        cout<<"Iveskite "<<i+1<<" studento pavarde"<<endl;
        cin>>naujas_st.pavarde;
        int nd_kiekis;
        cout<<"Iveskite "<<i+1<<" studento namu darbu kieki"<<endl;
        cin>>nd_kiekis;
        double nd_suma=0;
        for(int j=0;j<nd_kiekis;j++)
        {
            int nd_rez;
            cout<<"Iveskite "<<i+1<<" studento"<<j+1<<" namu darbo rezultata"<<endl;
            cin>>nd_rez;
            naujas_st.ND.push_back(nd_rez);
            nd_suma=nd_suma+nd_rez;
        }
        cout<<"Iveskite "<<i+1<<" studento egzamino rezultata"<<endl;
        cin>>naujas_st.Egz;
        naujas_st.galutinis=rezultatas(nd_suma, nd_kiekis, naujas_st.Egz);

        studentai.push_back(naujas_st);
    }

    //Duomenu isvedimas
    cout<<"Vardas"<<setw(10)<<"Pavarde"<<setw(12)<<"Galutinis"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<stud_sk;i++)
    {
        cout<<studentai[i].vardas<<setw(10)<<studentai[i].pavarde<<setw(12)<<fixed<<setprecision(2)<<studentai[i].galutinis<<endl;
    }
    return 0;
}
