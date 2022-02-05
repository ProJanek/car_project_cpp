#include <iostream>
#include <vector>
#include "samochod.h"
#include "predkosciomierz.h"
#include "silnik.h"
#include "skrzynia_biegow.h"
#include "zbiornik_paliwa.h"
#include "jazda_samochodem.h"

using namespace std;

int main()
{
    cout << "Witaj w grze samochodowej " << endl;
    cout << "Gra rozgrywa sie z poziomu konsoli. Aby rozpoczac wpisz z klawiatury komende. " << endl;
    cout << "Mozliwe komendy: " << endl;
    cout << "w - zwieksz predkosc" << endl;
    cout << "s - zmniejsz predkosc" << endl;
    cout << "d - wrzuc wyzszy bied " << endl;
    cout << "a - wrzuc nizszy bieg " << endl;
    cout << "t - tankowanie " << endl;

    string komenda;

    jazda_samochodem w;

    while (true)
    {

        cout << "Podaj komende" << endl;
        cin >> komenda;
        if (komenda == "w")
        {
            w.ZwiekszPredkosc();
            w.SetObroty();
        }
        else if (komenda == "s")
        {
            w.ZmniejszPredkosc();
            w.SetObroty();
        }
        else if (komenda == "d")
        {
            w.ZwiekszBieg();
            w.SetObroty();
        }
        else if (komenda == "a")
        {
            w.ZmniejszBieg();
            w.SetObroty();
        }
        else if (komenda == "t")
        {
            w.Tankowanie();
        }
        else
            cout << "nieprawidlowa komenda" << endl;
        w.drukuj();

        if (w.ile_w_baku() < w.ile_rezerwa())
            cout << "REZERWA!!! Zjedz na nablizsza stacje benzynowa!"<< endl;

        w.SetZuzyciePaliwa();

        if (w.ile_w_baku() < 0)
        {
            cout << "ZABRAKLO PALIWA!!! KONIEC GRY!!!" << endl;
            break;
        }
    }
}