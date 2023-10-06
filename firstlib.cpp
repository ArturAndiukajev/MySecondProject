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
    outputFile<<"Vardas"<<setw(20)<<" "<<"Pavarde"<<setw(20)<<" ";
    for(int i=1;i<nd_kiekis+1;i++)
    {
        outputFile<<"ND"<<right<<i<<setw(7)<<" ";
    }
    outputFile<<setw(7)<<left<<"Egz."<<endl;
    for(int i=1;i<studentu_skaicius+1;i++)
    {
        outputFile<<"Vardas"<<right<<i<<setw(20)<<" "<<"Pavarde"<<right<<i<<setw(20)<<" ";
        for(int j=0;j<nd_kiekis;j++)
        {
            outputFile<<setw(7)<<right<<rand()%10+1;
        }
        outputFile<<setw(7)<<right<<rand()%10+1<<endl;
    }
    outputFile.close();
}
//------------------------------------------------------------------

//----------------------------------------------------------------------
void padalintiStudentus(vector<Studentas>& studentai,vector<Studentas>& vargsiukai, vector<Studentas>& kietiakiai, double riba)
{
    for(int i=0;i<studentai.size();i++)
    {
        if(studentai[i].galutinis1<riba)
        {
            vargsiukai.push_back(studentai[i]);
        }
        else
        {
            kietiakiai.push_back(studentai[i]);
        }
    }
}
//--------------------------------------------------------------------------
