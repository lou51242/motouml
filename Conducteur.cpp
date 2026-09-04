// Conducteur.cpp
#include "Conducteur.h"
#include <algorithm>

Conducteur::Conducteur(std::string nom, std::string prenom, int anneeNaissance)
    : nom(nom), prenom(prenom), anneeNaissance(anneeNaissance) {}

std::string Conducteur::getNom() const { return nom; }
std::string Conducteur::getPrenom() const { return prenom; }
std::string Conducteur::getAnneeNaissance() const { return std::to_string(anneeNaissance); }

void Conducteur::addMoto(Moto* newMoto) {
    if (newMoto) {
        mesMotos.push_back(newMoto);
    }
}

void Conducteur::rmMoto(Moto* rmMoto) {
    auto it = std::find(mesMotos.begin(), mesMotos.end(), rmMoto);
    if (it != mesMotos.end()) {
        mesMotos.erase(it);
    }
}

std::string Conducteur::toString() const {
    std::string res = "Conducteur: " + prenom + " " + nom + " (Ne(e) en " + std::to_string(anneeNaissance) + ")\n";
    res += "Motos possedees (" + std::to_string(mesMotos.size()) + ") :\n";
    for (const auto& moto : mesMotos) {
        res += "  - " + moto->toString() + "\n";
    }
    return res;
}
