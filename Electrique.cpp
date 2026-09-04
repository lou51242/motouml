// Electrique.cpp
#include "Electrique.h"

Electrique::Electrique(int puissance, float tensionMax)
    : Moteur(puissance), tensionMax(tensionMax) {}

float Electrique::getTensionMax() const { return tensionMax; }
void Electrique::setTensionMax(float tension) { tensionMax = tension; }
std::string Electrique::toString() const {
    return Moteur::toString() + " | Tension Max: " + std::to_string(tensionMax) + " V";
}
