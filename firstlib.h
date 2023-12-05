#ifndef FIRSTLIB_H_INCLUDED
#define FIRSTLIB_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::setw;
using std::fixed;
using std::left;
using std::right;
using std::setprecision;
using std::sort;
using std::accumulate;
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::istream;




class Studentas{
    private:
        string vardas;
        string pavarde;
        vector <int> ND;
        int Egz;
        double galutinis1;
        double galutinis2;
    public:
        Studentas(): Egz(0), galutinis1(0), galutinis2(0) {};
        Studentas(istream& is);
        inline string getVardas() const { return vardas; }
        inline string getPavarde() const { return pavarde; }
        inline double getGalutinis() const { return galutinis1; }
        inline double getGalutinisMediana() const { return galutinis2; }
        inline int getEgz() const { return Egz; }
        vector<int>& getND() { return ND; }
        istream& readStudent(istream&);
        void setVardas(const string& vardas) { this->vardas = vardas; }
        void setPavarde(const string& pavarde) { this->pavarde = pavarde; }
        void setEgzaminas(int Egz) { this->Egz = Egz; }
        void addND(int value) { ND.push_back(value); }
        void setGalutinis(double value) { galutinis1 = value; }
        void setGalutinisMediana(double value) {galutinis2 = value; }
        ~Studentas(){ND.clear();}

        Studentas(const Studentas& other)
        {
        vardas = other.vardas;
        pavarde = other.pavarde;
        ND = other.ND;
        Egz = other.Egz;
        galutinis1 = other.galutinis1;
        galutinis2 = other.galutinis2;
        }

        Studentas& operator=(const Studentas& other)
        {
        if (this != &other)
        {
            vardas = other.vardas;
            pavarde = other.pavarde;
            ND = other.ND;
            Egz = other.Egz;
            galutinis1 = other.galutinis1;
            galutinis2 = other.galutinis2;
        }
        return *this;
        }
};

double rezultatas(double suma,int kiekis,int egz);
double Med(vector<int> data);
double rezMed(double mediana, int egz);
bool palyginimasVardai(Studentas studentas1, Studentas studentas2);
bool palyginimasPavardes(Studentas studentas1, Studentas studentas2);
bool palyginimasVidurkis(Studentas studentas1, Studentas studentas2);
void generavimas(int studentu_skaicius, string fileName, int nd_kiekis);
void isvedimas(vector<Studentas> studentai, string fileName);
void skaitymas(vector<Studentas>& studentai, string Fname);
bool Vargsiukai(const Studentas studentas, double riba);
#endif // FIRSTLIB_H_INCLUDED
