#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include <string>
#include "Moteur.h"

class Electrique : public Moteur {
private:
    float tensionMax;

public:
    Electrique(int puissance = 0, float tensionMax = 0.0f);
    float getTensionMax() const;
    void setTensionMax(float tension);
    std::string toString() const override;
};

#endif // ELECTRIQUE_H
