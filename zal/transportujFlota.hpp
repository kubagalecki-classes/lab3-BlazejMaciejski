#pragma once

#include "Stocznia.hpp"
#include <typeinfo>;

unsigned int transportujFlota(unsigned int towar)
{
    int      liczbaZaglowcow = 0;
    Stocznia a{};
    // Twoja implementacja tutaj
    while (towar > 0) {
        Statek* ship = a();
        if (towar > ship->transportuj()) {
            towar -= ship->transportuj();
            if (typeid(*(ship)) == typeid(Zaglowiec)) {
                liczbaZaglowcow++;
            }
            delete ship;
        }
        else {
            break;
        }
    }
    return liczbaZaglowcow;