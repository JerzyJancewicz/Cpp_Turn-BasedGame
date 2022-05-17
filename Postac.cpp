#include "Postac.h"

    int Postac::getSila() const {
        return Sila;
    }

    void Postac::setSila(int sila) {
        Postac::Sila = sila;
    }

    int Postac::getZrecznosc() const {
        return Zrecznosc;
    }

    void Postac::setZrecznosc(int zrecznosc) {
        Zrecznosc = zrecznosc;
    }

    int Postac::getPunktyZycia() const {
        return PunktyZycia;
    }

    void Postac::setPunktyZycia(int punktyZycia) {
        PunktyZycia = punktyZycia;
    }

    int Postac::getPunktyExp() const {
        return PunktyExp;
    }

    void Postac::setPunktyExp(int punktyExp) {
        PunktyExp = punktyExp;
    }

Postac::Postac(int sila, int zrecznosc, int punktyZycia, int punktyExp) :
    Sila(sila), Zrecznosc(zrecznosc),PunktyZycia(punktyZycia),PunktyExp(punktyExp) {}

