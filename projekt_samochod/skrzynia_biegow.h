#ifndef SKRZYNIA_H
#define SKRZYNIA_H

#include <iostream>
#include "samochod.h"
using namespace std;

class skrzynia_biegow : public samochod
{
public:
    skrzynia_biegow() : bieg(0) {}
    virtual ~skrzynia_biegow() {}
    void SetValue(int b) { bieg = b; }
    int GetValue() { return bieg; }
    void drukuj() { cout << "\t\t\t\tSamochod jedzie na " << bieg << " biegu" << endl; }
private:
    int bieg;
};

#endif
