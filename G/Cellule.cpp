#include "Cellule.h"

// Constructor
Cellule::Cellule(bool etat) : vivante(etat) {}

// Getter for the cell's state
bool Cellule::estVivante() const {
    return vivante;
}

// Setter for the cell's state
void Cellule::setVivante(bool etat) {
    vivante = etat;
}

// Toggle the cell's state
void Cellule::toggle() {
    vivante = !vivante;
}
