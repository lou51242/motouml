/**
 * @file Thermique.h
 * @brief Déclaration de la classe Thermique, héritant de Moteur.
 */

#ifndef THERMIQUE_H
#define THERMIQUE_H

#include <string>
#include "Moteur.h"

/**
 * @class Thermique
 * @brief Représente un moteur à combustion thermique.
 */
class Thermique : public Moteur {
private:
    float cylindree; /**< Cylindrée du moteur en cc */

public:
    /**
     * @brief Constructeur de la classe Thermique.
     * @param puissance Puissance du moteur en CV (par défaut 0).
     * @param cylindree Cylindrée en cc (par défaut 0.0f).
     */
    Thermique(int puissance = 0, float cylindree = 0.0f);

    /**
     * @brief Obtenir la cylindrée du moteur.
     * @return La cylindrée en cc.
     */
    float getCylindree() const;

    /**
     * @brief Modifier la cylindrée du moteur.
     * @param newCylindree Nouvelle cylindrée.
     */
    void setCylindree(float newCylindree);

    /**
     * @brief Description textuelle du moteur thermique.
     * @return std::string Chaîne formatée avec puissance et cylindrée.
     */
    std::string toString() const override;
};

#endif // THERMIQUE_H
