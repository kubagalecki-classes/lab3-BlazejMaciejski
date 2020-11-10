#pragma once

#include <typeinfo>;
#include "include/Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int      liczbaZaglowcow = 0;
    Stocznia a{};
    // Twoja implementacja tutaj
    while (towar > 0)
    {
        Statek*  ship = a();
        towar -= ship->transportuj();
        if (typeid(ship) == typeid(Zaglowiec)) 
        {
            liczbaZaglowcow++;
        }
        delete ship;
    }  
    return liczbaZaglowcow;
}