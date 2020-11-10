#pragma once

#include "Stocznia.hpp"
#include <typeinfo>

unsigned int transportujFlota(unsigned int towar)
{
    int      liczbaZaglowcow = 0;
    Stocznia a{};
    // Twoja implementacja tutaj
    while (towar > 0) {
        Statek* ship = a();

        if (typeid(*(ship)) == typeid(Zaglowiec)) 
        {
            liczbaZaglowcow++;
        }

        if (towar > ship->transportuj()) 
        {
            towar -= ship->transportuj();
            delete ship;
            
        }
        else 
        {
            delete ship;
            break;
        }
    }
    return liczbaZaglowcow;
}