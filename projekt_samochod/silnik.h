#ifndef SILNIK_H
#define SILNIK_H

#include <iostream>
#include "samochod.h"
using namespace std;

class silnik : public samochod
{
public:
    silnik() : obroty(0) {}
    virtual ~silnik() {}
    void SetValue(int o) { obroty = o; }
    int GetValue() { return obroty; }
    void drukuj() { cout << "\t\t\t\tObroty silnika: " << obroty << endl; }
private:
    int obroty;
};

#endif
