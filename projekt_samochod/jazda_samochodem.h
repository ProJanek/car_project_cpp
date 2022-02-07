#ifndef JAZDA_H
#define JAZDA_H

#include <iostream>
#include <vector>
#include "samochod.h"
#include "predkosciomierz.h"
#include "silnik.h"
#include "skrzynia_biegow.h"
#include "zbiornik_paliwa.h"
using namespace std;


class jazda_samochodem
{
public:
    jazda_samochodem()
    {
        czesci.push_back(new predkosciomierz);
        czesci.push_back(new silnik);
        czesci.push_back(new skrzynia_biegow);
        czesci.push_back(new zbiornik_paliwa);
    }
    ~jazda_samochodem()
    {
        for (int i = 0; i < czesci.size(); ++i)
            delete czesci[i];
    }

    void ZwiekszPredkosc()
    {
        int b = czesci[2]->GetValue();
        if (b == 0)
            throw 1;
        else
        {
            int predkosc_max = 180;
            int pred = czesci[0]->GetValue();
            if (pred < predkosc_max)
                pred += 5;
            else
                throw string("string");
            czesci[0]->SetValue(pred);
        }
    }

    void ZwiekszBieg()
    {
        int b = czesci[2]->GetValue();
        if (b >= 5)
            throw 'a';
        else
        {
            b += 1;
            czesci[2]->SetValue(b);
        }
    }

    void ZmniejszPredkosc()
    {
        int b = czesci[2]->GetValue();
        if (b == 0)
            throw 1;
        else
        {
            int predkosc_max = 180;
            int pred = czesci[0]->GetValue();
            if (pred > 0)
                pred -= 5;
            else
                throw true;
            czesci[0]->SetValue(pred);
        }
    }

    void ZmniejszBieg()
    {
        int b = czesci[2]->GetValue();
        if (b == 0)
            throw 1.0;
        else
        {
            b -= 1;
            czesci[2]->SetValue(b);
        }
    }

    void SetObroty()
    {
        int obroty;
        int v = czesci[0]->GetValue();
        int b = czesci[2]->GetValue();
        if (b == 0)
        {
            obroty = 0;
        }
        else if (b == 1)
            obroty = 100 * v;
        else if (b == 2)
            obroty = 50 * v;
        else if (b == 3)
            obroty = 40 * v;
        else if (b == 4)
            obroty = 30 * v;
        else
            obroty = 20 * v;
        czesci[1]->SetValue(obroty);
    }

    void SetZuzyciePaliwa()
    {
        int paliwo = czesci[3]->GetValue();
        int v = czesci[0]->GetValue();
        if (v == 0)
            paliwo -= 2;
        else
            paliwo -= 2 * v;

        czesci[3]->SetValue(paliwo);
    }

    void Tankowanie()
    {
        cout << "Tankujesz do pelna" << endl;
        czesci[3]->SetValue(pojemnosc_baku);
    }

    int ile_w_baku()
    {
        return czesci[3]->GetValue();
    }

    int ile_rezerwa()
    {
        return rezerwa;
    }

    void drukuj()
    {
        for (int i = 0; i < czesci.size(); ++i)
            czesci[i]->drukuj();
    }

    

private:
    vector<samochod*> czesci;
    int pojemnosc_baku = 4000;
    int rezerwa = 1000;
};

#endif
