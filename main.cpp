#include <iostream>
#include "Conducteur.h"
#include "Thermique.h"
#include "Electrique.h"

int main() {
    // 1. Création du 1er conducteur et de 2 motos (1 thermique, 1 électrique)
    Conducteur c1("Dupont", "Jean", 1990);

    Moto* m1 = new Moto(new Thermique(75, 600.0f), "Rouge", "Yamaha MT-07", 180);
    Moto* m2 = new Moto(new Electrique(110, 400.0f), "Noire", "Zero SR/F", 220);

    // Attribution des deux motos au premier conducteur
    c1.addMoto(m1);
    c1.addMoto(m2);

    // Affichage des informations du conducteur 1
    std::cout << "=== ETAPE 1 ===" << std::endl;
    std::cout << c1.toString() << std::endl;

    // 2. Création de 2 nouveaux conducteurs et d'une 3ème moto
    Conducteur c2("Martin", "Sophie", 1995);
    Conducteur c3("Bernard", "Lucas", 1988);

    Moto* m3 = new Moto(new Thermique(120, 1000.0f), "Bleue", "BMW S1000RR", 197);

    // Répartition : 1 moto par conducteur
    // On retire m2 à c1 pour la donner à c2
    c1.rmMoto(m2);
    c2.addMoto(m2);
    c3.addMoto(m3);

    // Affichage des informations des 3 conducteurs
    std::cout << "=== ETAPE 2 (Apres repartition) ===" << std::endl;
    std::cout << c1.toString() << std::endl;
    std::cout << c2.toString() << std::endl;
    std::cout << c3.toString() << std::endl;

    // Nettoyage de la mémoire dynamique (motos créées avec new)
    delete m1;
    delete m2;
    delete m3;

    return 0;
}
