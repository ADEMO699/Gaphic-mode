#include "JeuDeLaVie.h"

int main() {
    std::string fichierEntree = "input.txt";
    int nombreIterations = 100;
    int tailleCellule = 20;

    JeuDeLaVie jeu(fichierEntree, nombreIterations, tailleCellule);
    jeu.executer();

    return 0;
}
