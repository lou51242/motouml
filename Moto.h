/**
 * @file Moto.h
 * @brief Déclaration de la classe Moto.
 */

#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "Moteur.h"

/**
 * @class Moto
 * @brief Représente une moto possédant un Moteur (Composition).
 */
class Moto {
private:
    int poids;
    std::string couleur;
    std::string nom;
    Moteur* moteur; /**< Pointeur vers le Moteur associé (Composition) */

public:
    /**
     * @brief Constructeur de Moto.
     * @param moteur Pointeur vers un objet Moteur.
     * @param couleur Couleur de la moto.
     * @param nom Nom/Modèle de la moto.
     * @param poids Poids en kg.
     */
    Moto(Moteur* moteur, std::string couleur, std::string nom = "", int poids = 0);

    ~Moto();

    int getPoids() const;
    void setPoids(int poids);
    std::string getCouleur() const;
    Moteur* getMoteur() const;
    float getAcceleration() const;
    std::string toString() const;
};

#endif
