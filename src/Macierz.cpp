#include "Macierz.hh"
#include "Wektor.hh"
#include <iostream>

using namespace std;

istream& operator >> (istream &Strm, Macierz &Mac)
{
    Wektor z;
    for(int i=0; i<ROZMIAR; i++)
    {
        Strm >> z;
        Mac.setKolumna(z,i);
    }
    return Strm;
}

ostream& operator << (ostream &Strm, const Macierz &Mac)
{
    Strm<< endl;
    for(int i=0; i<ROZMIAR; i++)
    {
        Strm<< Mac.getKolumna(i) <<endl;
    }
    return Strm;
}

double Macierz::det()
{
}


void Macierz::Transponuj()
{

}