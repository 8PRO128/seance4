#include <iostream>
#include "Voiture.h"

Voiture::Voiture() {
    vitesse = 0;
    essence = 100;
}

void Voiture::accelerer() {
    if(essence > 0) {
        vitesse += 10;
        essence -= 5;
    } else {
        cout << "Pas assez d'essence pour accélérer!" << endl;
    }
}

void Voiture::freiner() {
    if(vitesse > 0) { vitesse -= 10; }
    else { cout << "La voiture est déjà à l'arrêt!" << endl; }
}

void Voiture::afficherEtat() const {
    cout << "Vitesse: " << vitesse << " km/h" << endl;
    cout << "Essence: " << essence << "%" << endl;
}
