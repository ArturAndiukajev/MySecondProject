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

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::setw;
using std::fixed;
using std::left;
using std::setprecision;
using std::sort;
using std::accumulate;
using std::ifstream;
using std::ofstream;



struct Studentas{
    string vardas;
    string pavarde;
    vector <int> ND;
    int Egz;
    double galutinis1;
    double galutinis2;
};


#endif // FIRSTLIB_H_INCLUDED
