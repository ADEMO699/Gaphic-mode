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

    void render(); // M�thode pour dessiner la grille
    bool handleEvents(); // G�rer les �v�nements utilisateur
};

#endif // INTERFACE_H
