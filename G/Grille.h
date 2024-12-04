#ifndef GRILLE_H
#define GRILLE_H

#include <vector>
#include <string> // Pour utiliser std::string
#include "Cellule.h"


class Grille {
private:
    std::vector<std::vector<Cellule>> cellules;
    int largeur;
    int hauteur;

public:
    Grille(int largeur, int hauteur);  // Constructeur correctement défini

    // Méthodes pour accéder aux dimensions et aux cellules
    int getHauteur() const;
    int getLargeur() const;
    const Cellule& getCellule(int x, int y) const;
    Cellule& getCellule(int x, int y); // Version modifiable

    void miseAJour();
    void afficher() const;
    void chargerDepuisFichier(const std::string& cheminFichier); // Le bon type pour l'argument
};

#endif // GRILLE_H
