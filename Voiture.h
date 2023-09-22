#ifndef VOITURE_H
#define VOITURE_H

#include <string>
using namespace std;

class Voiture {
public:
    Voiture();

    /** Augmente la vitesse et consomme de l'essence */
    void accelerer();

    /** Diminue la vitesse sans consommer d'essence */
    void freiner();

    /** Affiche l'état actuel de la voiture */
    void afficherEtat() const;

private:
    int vitesse;
    int essence;
};

#endif