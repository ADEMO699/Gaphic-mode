#include "Grille.h"
#include <iostream>
#include <fstream>
#include <string>


// Constructeur
Grille::Grille(int largeur, int hauteur) : largeur(largeur), hauteur(hauteur) {
    cellules.resize(hauteur, std::vector<Cellule>(largeur));
}

// Accesseurs pour les dimensions
int Grille::getHauteur() const {
    return hauteur;
}

int Grille::getLargeur() const {
    return largeur;
}

// Accesseurs pour les cellules
const Cellule& Grille::getCellule(int x, int y) const {
    return cellules[x][y];
}

Cellule& Grille::getCellule(int x, int y) {
    return cellules[x][y];
}

// Implémentation de la méthode pour charger depuis un fichier
void Grille::chargerDepuisFichier(const std::string& cheminFichier) {
    std::ifstream fichier(cheminFichier);
    if (!fichier.is_open()) {
        std::cerr << "Erreur d'ouverture du fichier " << cheminFichier << std::endl;
        exit(1);
    }

    fichier >> hauteur >> largeur;
    cellules.resize(hauteur, std::vector<Cellule>(largeur));

    for (int i = 0; i < hauteur; ++i) {
        for (int j = 0; j < largeur; ++j) {
            int etat;
            fichier >> etat;
            cellules[i][j].setVivante(etat == 1);
        }
    }

    fichier.close();
}
