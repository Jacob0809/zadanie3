#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>

using namespace std;


class Wektor {
 
  double skladowe[ROZMIAR]; 
  public:
  
   void setSkladowa(unsigned int index, double war){
     skladowe[index]=war;
   }
   double getSkladowa(unsigned int index) const{
     return skladowe[index];
   }
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
istream& operator >> (istream &Strm, Wektor &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
ostream& operator << (ostream& Strm, const Wektor &Wek);
Wektor operator + (Wektor Skl1, Wektor Skl2);
Wektor operator - (Wektor Skl1, Wektor Skl2);
double operator * (Wektor Skl1, Wektor Skl2);
Wektor operator * (Wektor Skl1, double Skl2);
Wektor operator / (Wektor Skl1, double Skl2);

#endif
