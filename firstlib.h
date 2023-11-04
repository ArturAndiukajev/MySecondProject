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



struct Studentas{
    string vardas;
    string pavarde;
    vector <int> ND;
    int Egz;
    double galutinis1;
    double galutinis2;
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
#endif // FIRSTLIB_H_INCLUDED
