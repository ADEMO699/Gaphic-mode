#ifndef INTERFACE_H
#define INTERFACE_H

#include <SFML/Graphics.hpp>
#include "Grille.h"

class Interface {
private:
    sf::RenderWindow window;
    Grille& grille;
    int tailleCellule;

public:
    Interface(Grille& grille, int largeurFenetre, int hauteurFenetre, int tailleCellule);

    void render(); // Méthode pour dessiner la grille
    bool handleEvents(); // Gérer les événements utilisateur
};

#endif // INTERFACE_H
