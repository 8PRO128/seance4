#include <iostream>
using namespace std;

#include "Personne.h" 
#include "Voiture.h"

Personne::Personne() {
    nom = "";
    voiture = Voiture();
}

Personne::Personne(string nom, Voiture voiture) {
    this->nom = nom;
    this->voiture = voiture;
}
