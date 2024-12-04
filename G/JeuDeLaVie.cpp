#include "JeuDeLaVie.h"
#include <chrono>
#include <thread>


JeuDeLaVie::JeuDeLaVie(const std::string& cheminFichier, int iterations, int tailleCellule)
    : grille(10, 10)  // Correct : le constructeur attend 2 arguments
,
    interface(grille, 800, 800, tailleCellule), // Taille de la fenêtre fixe
    iterationsMax(iterations) {
    grille.chargerDepuisFichier(cheminFichier);
}

void JeuDeLaVie::executer() {
    int iteration = 0;

    while (iteration < iterationsMax && interface.handleEvents()) {
        grille.miseAJour();
        interface.render();

        ++iteration;

        // Pause pour rendre l'animation fluide
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Pause de 200 ms

    }
}

