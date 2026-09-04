// Moto.h
#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "Moteur.h"

class Moto {
private:
    int poids;
    std::string couleur;
    std::string nom;
    Moteur* moteur; // Composition : la moto est propriétaire de son moteur

public:
    Moto(Moteur* moteur, std::string couleur, std::string nom = "", int poids = 0);
    ~Moto(); // Libère le moteur associé

    int getPoids() const;
    void setPoids(int poids);
    std::string getCouleur() const;
    Moteur* getMoteur() const;
    float getAcceleration() const;
    std::string toString() const;
};

#endif
