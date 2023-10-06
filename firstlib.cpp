#include "firstlib.h";

//---------------------------------------------------------
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
//--------------------------------------------------------------

//--------------------------------------------------------------
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
//---------------------------------------------------------------

//---------------------------------------------------------------
double rezMed(double mediana, int egz)
{
    double rez=0;
    rez=0.4*mediana+0.6*egz;
    return rez;
}
//----------------------------------------------------------------

bool palyginimasVardai(Studentas studentas1, Studentas studentas2)
{
    return studentas1.vardas<studentas2.vardas;
}
//-----------------------------------------------------------------

//-----------------------------------------------------------------
void generavimas(int studentu_skaicius, string fileName, int nd_kiekis)
{
    ofstream outputFile(fileName);
    for(int i=0;i<studentu_skaicius;i++)
    {
        outputFile<<"Vardas"<<i<<" "<<"Pavarde"<<i<<" ";
        for(int j=0;j<nd_kiekis;j++)
        {
            int nd_rez;
            nd_rez=rand()%10+1;
            outputFile<<nd_rez<<" ";
        }
        outputFile<<rand()%10+1<<endl;
    }
    outputFile.close();
}
//------------------------------------------------------------------
