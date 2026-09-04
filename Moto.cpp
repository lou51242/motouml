// Moto.cpp
#include "Moto.h"

Moto::Moto(Moteur* m, std::string couleur, std::string nom, int poids)
    : moteur(m), couleur(couleur), nom(nom), poids(poids) {}

Moto::~Moto() {
    delete moteur; // Destruction du moteur lié (composition)
}

int Moto::getPoids() const { return poids; }
void Moto::setPoids(int p) { poids = p; }
std::string Moto::getCouleur() const { return couleur; }
Moteur* Moto::getMoteur() const { return moteur; }

float Moto::getAcceleration() const {
    if (poids > 0 && moteur) {
        return static_cast<float>(moteur->getPuissance()) / poids * 100.0f;
    }
    return 0.0f;
}

std::string Moto::toString() const {
    std::string res = "Moto: " + nom + " (" + couleur + ", " + std::to_string(poids) + " kg)\n";
    if (moteur) res += "  -> " + moteur->toString();
    return res;
}
