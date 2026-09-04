// Thermique.cpp
#include "Thermique.h"

Thermique::Thermique(int puissance, float cylindree)
    : Moteur(puissance), cylindree(cylindree) {}

float Thermique::getCylindree() const { return cylindree; }
void Thermique::setCylindree(float newCylindree) { cylindree = newCylindree; }
std::string Thermique::toString() const {
    return Moteur::toString() + " | Cylindree: " + std::to_string(cylindree) + " cc";
}
