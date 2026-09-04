// Conducteur.h
#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <string>
#include <vector>
#include "Moto.h"

class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto*> mesMotos; // Agrégation : référence des pointeurs vers des motos

public:
    Conducteur(std::string nom, std::string prenom, int anneeNaissance);

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getAnneeNaissance() const;
    void addMoto(Moto* newMoto);
    void rmMoto(Moto* rmMoto);
    std::string toString() const;
};

#endif
