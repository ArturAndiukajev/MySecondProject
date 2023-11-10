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
#include <list>
#include <iterator>

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
using std::list;
using std::sort;
using std::iterator;




struct Studentas{
    string vardas;
    string pavarde;
    list <int> ND;
    int Egz;
    double galutinis1;
    double galutinis2;
};

double rezultatasVidurkis(list <int>& namudarbai,int egz);
double Med(list <int>& namudarbai);
double rezultatasMediana(double mediana, int egz);
bool palyginimasVardai(const Studentas &a, const Studentas &b);
bool palyginimasPavardes(const Studentas &a, const Studentas &b);
bool palyginimasVidurkis(const Studentas &a, const Studentas &b);
void generavimas(int studentu_skaicius, string fileName, int nd_kiekis);
void isvedimas(list<Studentas> studentai, string fileName);
void skaitymas(list<Studentas>& studentai, string Fname);
bool Vargsiukai(const Studentas studentas, double riba);
#endif // FIRSTLIB_H_INCLUDED
