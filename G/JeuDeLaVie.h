#ifndef JEUDELAVIE_H
#define JEUDELAVIE_H

#include "Grille.h"
#include "Interface.h"
#include <string>

class JeuDeLaVie {
private:
    Grille grille;
    Interface interface;
    int iterationsMax;

public:
    JeuDeLaVie(const std::string& cheminFichier, int iterations, int tailleCellule);

    void executer(); // Exécuter la simulation
};

#endif // JEUDELAVIE_H
