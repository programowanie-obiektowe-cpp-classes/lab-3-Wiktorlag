#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    int suma_przetransportowanego_towaru = 0;
    int liczbaZaglowcow = 0;
    Stocznia stocznia{};
    while (!(suma_przetransportowanego_towaru >= towar)) 
        {
        Statek*  s1 = stocznia();
        int transportowanytowar = s1->transportuj();
        suma_przetransportowanego_towaru += transportowanytowar;
        if (dynamic_cast< Zaglowiec* >(s1) != nullptr) {
            liczbaZaglowcow++;
        }
        delete s1;
    }
return liczbaZaglowcow;
}