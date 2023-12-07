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
using std::ostream;




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
        double rezultatas()
        {
            try
            {
                if (ND.size() == 0)
                {
                    throw std::invalid_argument("Kiekis negali buti lygus nuliui");
                }}
            catch (const std::exception& e)
            {
                cout << "Dalyba is nulio. " << e.what() << endl;
            }
            return 0.4 * (accumulate(ND.begin(), ND.end(), 0.0) / ND.size()) + 0.6 * Egz;
        }

        double Med()
        {
            sort(ND.begin(), ND.end());
            size_t size = ND.size();
            if (size % 2 == 0)
            {
                size_t middle = size / 2;
                return (ND[middle - 1] + ND[middle]) / 2.0;
            }
            else
            {
                return ND[size / 2];
            }
        }
        double rezMed(double mediana)
        {
            return 0.4 * mediana + 0.6 * Egz;
        }

        friend istream& operator>>(istream& is, Studentas& studentas)
        {

            cout<<"Pasirinkite buda, kaip pildysite namu darbo pazimius. Jeigu norit ivesti patys rasykite 'A', jeigu atsitiktinai - rasykite 'R'"<<endl;
            char pasirinkimas2;
            is>>pasirinkimas2;
            cout<<"Iveskite studento varda"<<endl;
            is>>studentas.vardas;
            cout<<"Iveskite studento pavarde"<<endl;
            is>>studentas.pavarde;
            if (pasirinkimas2=='A'||pasirinkimas2=='a')
            {
                cout<<"Iveskite studento namu darbo rezultatus (iveskite '-1', kai baigsite)"<<endl;
                int nd_rez;
                while (true)
                {
                    if (is >> nd_rez)
                    {
                        if (nd_rez == -1)
                        {
                            break;
                        }
                        else if(nd_rez>10 || nd_rez<0)
                        {
                            is.clear();
                            is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            cout<<"Pazymys negali buti didesnis uz 10 arba mazesnis uz 0"<<endl;
                        }
                        else
                        {
                            studentas.addND(nd_rez);
                        }
                    }
                    else
                    {
                        is.clear();
                        is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Tai ne skaicius." << endl;
                    }
                }
            }
            else if(pasirinkimas2=='R'||pasirinkimas2=='r')
            {
                int nd_kiekis;
                cout<<"iveskite kiek namu darbu rezultatu noresite sugeneruoti"<<endl;
                is>>nd_kiekis;
                if(nd_kiekis<=0)
                {
                    cout<<"Iveskite skaiciu didesni uz 0."<<endl;

                }
                cout<<"Sugeneruoti namu darbu rezultatai:"<<endl;
                for(int i=0;i<nd_kiekis;i++)
                {
                    int nd_rez;
                    nd_rez=rand()%10+1;
                    cout<<nd_rez<<endl;
                    studentas.addND(nd_rez);
                }
            }
            else
            {
                cout<<"Neteisingas pasirinkimas";

            }
            if (pasirinkimas2=='A'||pasirinkimas2=='a')
            {
                cout<<"Iveskite studento egzamino rezultata"<<endl;
                is>>studentas.Egz;
                if(!is>>studentas.Egz)
                {
                    cout<<"Iveskite skaiciu."<<endl;

                }
                else if(studentas.Egz<=0 || studentas.Egz>10)
                {
                    cout<<"Iveskite skaiciu didesni uz 0 ir mazesni uz 10."<<endl;

                }
            }
            else if(pasirinkimas2=='R'||pasirinkimas2=='r')
            {
                studentas.Egz=rand()%10+1;
                cout<<"Sugeneruotas Egzamino rezultatas"<<" "<<studentas.Egz<<endl;
            }
            else
            {
                cout<<"Neteisingas pasirinkimas";

            }
        double nd_suma = accumulate(studentas.ND.begin(), studentas.ND.end(), 0.0);
        studentas.galutinis1=studentas.rezultatas();
        double mediana=studentas.Med();
        studentas.galutinis2=studentas.rezMed(mediana);
        studentas.ND.clear();
        return is;
        }


        friend ifstream& operator>>(ifstream& ifs, Studentas& studentas)
        {
            string Fname;
            cout<<"Iveskite failo pavadinima su '.txt'"<<endl;
            ifs>>Fname;
            ifstream input_file(Fname);
            if (!input_file.is_open())
            {
                cout << "Failo atidarymas negalimas: " << Fname << endl;
            }
            string header;
            int stulp_kiekis=0;
            getline(input_file, header);
            string v;
            string p;
            std::istringstream headerStream(header);
            string token;
            while (headerStream >> token)
            {
                stulp_kiekis++;
            }
            while (input_file >> v >> p)
            {
                Studentas naujas_st;
                naujas_st.setVardas(v);
                naujas_st.setPavarde(p);
                for(int i=0;i<stulp_kiekis-3;i++)
                {
                    int nd;
                    if (!(input_file >> nd)||(nd>10)||(nd<0))
                    {
                        cout << "Nepavyko perskaityti namu darbo rezultato is failo." << endl;
                        cout << "Tarp duomenu yra netikslumu, pvz. namu darbo pazymys didesnis uz 10 arba vietoj pazymio irasyta raide." << endl;

                    }
                    naujas_st.addND(nd);
                }
                int Egz;
                if (!(input_file >> Egz )||(Egz>10)||(Egz<0))
                {
                    cout << "Nepavyko perskaityti egzamino rezultato is failo." << endl;
                    cout << "Tarp duomenu yra netikslumu, pvz. egzamino pazymys didesnis uz 10 arba vietoj pazymio irasyta raide." << endl;

                }
            }
            input_file.close();
            return ifs;
        }
        friend ostream& operator<<(ostream& os, const Studentas& studentas)
        {

            os<<setw(20)<<left<<studentas.vardas<<setw(20)<<left<<studentas.pavarde<<setw(20)<<left;
            os<<fixed<<setprecision(2)<<studentas.galutinis1<<endl;
            os << "--------------------------------------------------"<<endl;
            return os;
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
