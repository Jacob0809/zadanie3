#include "Macierz.hh"
#include "Wektor.hh"
#include <iostream>
#include<cmath>

using namespace std;

istream& operator >> (istream &Strm, Macierz &Mac)
{
    
}

ostream& operator << (ostream &Strm, const Macierz &Mac)
{
    Mac.WyswietlMac();
    return Strm;
}



double Macierz::det()
{
}


void Macierz::Transponuj()
{

}


void Macierz::Poteguj()
{    
    int a=0;
    cout<<"podaj potege ";
    cin>>a;
    for(int i=0; i<ROZMIAR-1; i++)
    {
        for(int j=0; j<ROZMIAR-1; j++)
        {
            kolumny[i][j]=pow(kolumny[i][j], a);
        }
    }
}

