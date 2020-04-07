#include "Wektor.hh"
#include<iostream>
using namespace std;

istream& operator >> (istream &Strm, Wektor &Wek)
{
    double z;
    for(int i=0; i<ROZMIAR; i++)
    {
        Strm >> z;
        Wek.setSkladowa(z,i);
    }
    return Strm;
}

ostream& operator << (ostream& Strm, const Wektor &Wek)
{
    for(int i=0; i<ROZMIAR; i++)
    {
        Strm << Wek.getSkladowa(i) << " ";
    }
    return Strm;
}



Wektor operator + (Wektor Skl1, Wektor Skl2)
{
    double wynik;
    Wektor z;
    for(int i=0; i<ROZMIAR; i++)
    {
        wynik = Skl1.getSkladowa(i) + Skl2.getSkladowa(i);
        z.setSkladowa(wynik, i);
    } 
    return z;

}

Wektor operator - (Wektor Skl1, Wektor Skl2)
{
    double wynik;
    Wektor z;
    for(int i=0; i<ROZMIAR; i++)
    {
        wynik = Skl1.getSkladowa(i) - Skl2.getSkladowa(i);
        z.setSkladowa(wynik, i);
    } 
    return z;

}
//mnozenie skalarne
double operator * (Wektor Skl1, double Skl2)
{
    Wektor z;
    double wynik;
    for(int i=0; i<ROZMIAR; i++)
    {
        wynik = Skl1.getSkladowa(i) * Skl2;
        z.setSkladowa(wynik, i);
    }
    return z;
}

Wektor operator * (Wektor Skl1, double Skl2)
{
    Wektor z;
    double wynik;
    for(int i=0; i<ROZMIAR; i++)
    {
        wynik = Skl1.getSkladowa(i) * Skl2;
        z.setSkladowa(wynik, i);
    }
    return z;
}

Wektor operator / (Wektor Skl1, double Skl2)
{
    Wektor z;
    double wynik;
    for(int i=0; i<ROZMIAR; i++)
    {
        wynik = Skl1.getSkladowa(i) / Skl2;
        z.setSkladowa(wynik, i);
    }
    return z;
}


