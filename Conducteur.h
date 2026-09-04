/**
 * @file Conducteur.h
 * @brief Déclaration de la classe Conducteur.
 */

#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <string>
#include <vector>
#include "Moto.h"

/**
 * @class Conducteur
 * @brief Représente un conducteur pouvant posséder plusieurs motos (Agrégation).
 */
class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto*> mesMotos; /**< Liste des motos possédées */

public:
    /**
     * @brief Constructeur de Conducteur.
     * @param nom Nom de famille.
     * @param prenom Prénom.
     * @param anneeNaissance Année de naissance.
     */
    Conducteur(std::string nom, std::string prenom, int anneeNaissance);

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getAnneeNaissance() const;

    /**
     * @brief Ajoute une moto au garage du conducteur.
     * @param newMoto Pointeur vers la moto à ajouter.
     */
    void addMoto(Moto* newMoto);

    /**
     * @brief Retire une moto du garage du conducteur.
     * @param rmMoto Pointeur vers la moto à retirer.
     */
    void rmMoto(Moto* rmMoto);

    std::string toString() const;
};

#endif
