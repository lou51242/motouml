/**
 * @file Electrique.h
 * @brief Déclaration de la classe Electrique, héritant de Moteur.
 */

#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include <string>
#include "Moteur.h"

/**
 * @class Electrique
 * @brief Représente un moteur électrique.
 */
class Electrique : public Moteur {
private:
    float tensionMax; /**< Tension maximale admissible en Volts */

public:
    /**
     * @brief Constructeur de la classe Electrique.
     * @param puissance Puissance du moteur en CV (par défaut 0).
     * @param tensionMax Tension maximale en Volts (par défaut 0.0f).
     */
    Electrique(int puissance = 0, float tensionMax = 0.0f);

    /**
     * @brief Obtenir la tension maximale.
     * @return La tension en Volts.
     */
    float getTensionMax() const;

    /**
     * @brief Modifier la tension maximale.
     * @param tension Nouvelle tension en Volts.
     */
    void setTensionMax(float tension);

    /**
     * @brief Description textuelle du moteur électrique.
     * @return std::string Chaîne formatée avec puissance et tension max.
     */
    std::string toString() const override;
};

#endif // ELECTRIQUE_H
