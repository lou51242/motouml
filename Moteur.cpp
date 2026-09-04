// Moteur.cpp
#include "Moteur.h"

Moteur::Moteur(int p) : puissance(p) {}
Moteur::~Moteur() {}

int Moteur::getPuissance() const { return puissance; }
void Moteur::setPuissance(int p) { puissance = p; }
std::string Moteur::toString() const {
    return "Puissance: " + std::to_string(puissance) + " CV";
}
