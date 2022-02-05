#ifndef ZBIORNIK_H
#define ZBIORNIK_H

#include <iostream>
#include "samochod.h"
using namespace std;

class zbiornik_paliwa : public samochod
{
public:
    zbiornik_paliwa() : ilosc_paliwa(4000) {}
    virtual ~zbiornik_paliwa() {}
    int GetValue() { return ilosc_paliwa; }
    void SetValue(int p) { ilosc_paliwa = p; }
    void drukuj() { cout << "\t\t\t\tZostalo w zbiorniku " << ilosc_paliwa << " mililitrow paliwa" << endl; }
private:
    int ilosc_paliwa;
};

#endif 