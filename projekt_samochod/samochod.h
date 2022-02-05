#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include <iostream>
using namespace std;

class samochod
{
public:
    samochod() {}
    virtual ~samochod() { cout << "samochod nie istnieje" << endl; }
    virtual void SetValue(int a) {};
    virtual int GetValue() { return 0; };
    //virtual double GetValue() = 0;
    virtual void drukuj() {};
};

#endif

