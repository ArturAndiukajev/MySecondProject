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

    for(int i=0;i<stud_sk;i++)
    {
        cout<<"Iveskite "<<i+1<<" studento varda"<<endl;
        cin>>studentai.vardas;
        cout<<"Iveskite "<<i+1<<" studento pavarde"<<endl;
        cin>>studentai.pavarde;
        int nd_kiekis;
        cout<<"Iveskite "<<i+1<<" studento namu darbu kieki"<<endl;
        cin>>nd_kiekis;

    }
    return 0;
}
