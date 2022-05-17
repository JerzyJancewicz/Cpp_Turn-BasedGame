#ifndef CPP_TURN_BASEDGAME_POSTAC_H
#define CPP_TURN_BASEDGAME_POSTAC_H
#include <string>
class Postac {

private:
    int Sila, Zrecznosc, PunktyZycia, PunktyExp;

public:
    Postac(int sila, int zrecznosc, int punktyZycia, int punktyExp);

    int getSila() const;

    void setSila(int sila);

    int getZrecznosc() const;

    void setZrecznosc(int zrecznosc);

    int getPunktyZycia() const;

    void setPunktyZycia(int punktyZycia);

    int getPunktyExp() const;

    void setPunktyExp(int punktyExp);
};

#endif //CPP_TURN_BASEDGAME_POSTAC_H
