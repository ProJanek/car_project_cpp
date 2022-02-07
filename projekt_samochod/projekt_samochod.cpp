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
            try
            {
                w.ZwiekszPredkosc();
                w.SetObroty();
            }
            catch (int e)
            {
                cout << "Najpierw wrzuc bieg!!!" << endl;
            }
            catch (string e)
            {
                cout << "Nie mozesz jechac szybciej!!!" << endl;
            }
          
        }
        else if (komenda == "s")
        {
            try
            {
                w.ZmniejszPredkosc();
                w.SetObroty();
            }
            catch (int e)
            {
                cout << "Najpierw wrzuc bieg!!!" << endl;
            }
            catch (bool e)
            {
                cout << "Nie mozesz jechac wolniej!!!" << endl;
            }
        }
        else if (komenda == "d")
        {
            try
            {
                w.ZwiekszBieg();
                w.SetObroty();
            }
            catch (char e)
            {
                cout << "Nie ma wyzszego biegu!!!" << endl;
            }
        }
        else if (komenda == "a")
        {
            try 
            {
                w.ZmniejszBieg();
                w.SetObroty();
            }
            catch (double e)
            {
                cout << "Nie ma nizszego biegu!!!" << endl;
            }
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