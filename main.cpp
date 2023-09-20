#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Studentas{
    string vardas;
    string pavarde;
    vector <int> ND;
    int Egz;
};
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
        for(int j=0;j<nd_kiekis;j++)
        {
            int nd_rez;
            cout<<"Iveskite "<<i+1<<" studento"<<j+1<<" namu darbo rezultata"<<endl;
            cin>>nd_rez;
            naujas_st.ND.push_back(nd_rez);
        }
        cout<<"Iveskite "<<i+1<<" studento egzamino rezultata"<<endl;
        cin>>naujas_st.Egz;
    }
    return 0;
}
