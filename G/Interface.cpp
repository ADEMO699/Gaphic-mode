#include "Interface.h"
#include <chrono>
#include <thread>


Interface::Interface(Grille& grille, int largeurFenetre, int hauteurFenetre, int tailleCellule)
    : grille(grille), tailleCellule(tailleCellule),
    window(sf::VideoMode(largeurFenetre, hauteurFenetre), "Jeu de la Vie - Interface SFML") {
}

void Interface::render() {
    window.clear();

    // Parcourir la grille et dessiner les cellules
    for (int i = 0; i < grille.getHauteur(); ++i) {
        for (int j = 0; j < grille.getLargeur(); ++j) {
            sf::RectangleShape celluleShape(sf::Vector2f(tailleCellule - 1, tailleCellule - 1));
            celluleShape.setPosition(j * tailleCellule, i * tailleCellule);

            if (grille.getCellule(i, j).estVivante()) {
                celluleShape.setFillColor(sf::Color::Green); // Cellule vivante
            }
            else {
                celluleShape.setFillColor(sf::Color::Black); // Cellule morte
            }

            window.draw(celluleShape);
        }
    }

    window.display();
}

bool Interface::handleEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
            return false; // Terminer la boucle principale
        }
    }

    return true; // Continuer la simulation
}
