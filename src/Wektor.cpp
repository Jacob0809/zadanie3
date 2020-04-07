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
    Strm<< endl;
    for(int i=0; i<ROZMIAR; i++)
    {
        Strm<< Wek.getSkladowa(i);
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
double operator * (Wektor Skl1, Wektor Skl2)
{
    
    double wynik, ilo;
    for(int i=0; i<ROZMIAR; i++)
    {
        ilo = Skl1.getSkladowa(i) * Skl2.getSkladowa(i);
        wynik+=ilo;
    }
    return wynik;
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
//iloczyn wektorowy
Wektor operator @(Wektor Skl1, Wektor Skl2)
{
    Wektor z;
    double wynik;
    wynik=Skl1.getSkladowa(2)*Skl2.getSkladowa(3)-Skl1.getSkladowa(3)*Skl2.getSkladowa(2);
    z.setSkladowa(wynik, 1);
    wynik =Skl1.getSkladowa(3)*Skl2.getSkladowa(1)-Skl1.getSkladowa(1)*Skl2.getSkladowa(3);
    z.setSkladowa(wynik, 2);
    wynik=Skl1.getSkladowa(1)*Skl2.getSkladowa(2)-Skl1.getSkladowa(2)*Skl2.getSkladowa(1);
    z.setSkladowa(wynik, 3);
    return z;
    
    


}


