#ifndef PREDKOSCIOMIERZ_H
#define PREDKOSCIOMIERZ_H

#include <iostream>
#include "samochod.h"
using namespace std;

class predkosciomierz : public samochod
{
public:
    predkosciomierz() : predkosc(0) {}
    virtual ~predkosciomierz() {}
    int GetValue() { return predkosc; }
    void SetValue(int p) { predkosc = p; }
    virtual void drukuj() { cout << "\t\t\t\tSamochod jedzie z predkoscia rowna " << predkosc << " km/h" << endl; }
private:
    int predkosc;
    //int predkosc_max = 180;
};

#endif