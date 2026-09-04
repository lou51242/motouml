// Moteur.h
#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>

class Moteur {
protected:
    int puissance;

public:
    Moteur(int p = 0);
    virtual ~Moteur();

    int getPuissance() const;
    void setPuissance(int puissance);
    virtual std::string toString() const;
};

#endif
