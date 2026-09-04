/**
 * @file Moteur.h
 * @brief Déclaration de la classe Moteur.
 */

#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>

/**
 * @class Moteur
 * @brief Classe de base représentant un moteur générique.
 */
class Moteur {
protected:
    int puissance; /**< Puissance du moteur en CV */

public:
    /**
     * @brief Constructeur de la classe Moteur.
     * @param p Puissance initiale (par défaut 0).
     */
    Moteur(int p = 0);

    virtual ~Moteur();

    /**
     * @brief Obtenir la puissance du moteur.
     * @return La puissance en CV.
     */
    int getPuissance() const;

    /**
     * @brief Modifier la puissance du moteur.
     * @param puissance Nouvelle puissance.
     */
    void setPuissance(int puissance);

    /**
     * @brief Retourne une description textuelle du moteur.
     * @return std::string Chaîne contenant les détails.
     */
    virtual std::string toString() const;
};

#endif
