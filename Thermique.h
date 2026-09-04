// Thermique.h
#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

class Thermique : public Moteur {
private:
    float cylindree;

public:
    Thermique(int puissance = 0, float cylindree = 0.0f);
    float getCylindree() const;
    void setCylindree(float newCylindree);
    std::string toString() const override;
};

#endif
