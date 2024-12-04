#ifndef CELLULE_H
#define CELLULE_H

class Cellule {
private:
    bool vivante; // True if the cell is alive, false otherwise

public:
    // Constructor
    Cellule(bool etat = false);

    // Getters and setters
    bool estVivante() const;
    void setVivante(bool etat);

    // Additional functionality if needed
    void toggle(); // Toggle the cell's state between alive and dead
};

#endif // CELLULE_H
