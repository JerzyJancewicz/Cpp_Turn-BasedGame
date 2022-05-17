#ifndef CPP_TURN_BASEDGAME_GRA_H
#define CPP_TURN_BASEDGAME_GRA_H

#include <iostream>
#include "Postac.h"
#include "Postacie.h"
#include <string>

using namespace std;

class Gra {

private:
    bool CzygGramy;
    int ruch;

public:
    Gra();
    virtual ~Gra();
    bool getCzygGramy() const;
    void MenuGlowne();

};
#endif //CPP_TURN_BASEDGAME_GRA_H
