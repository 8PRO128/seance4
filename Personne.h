#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include "Voiture.h"

using namespace std;

class Personne {
public:
    Personne();
    Personne(string nom, Voiture voiture);

    void set_nom(string nom);
    void set_voiture(Voiture voiture);
    
    string get_nom() const;
    Voiture get_voiture() const;
    
    void afficher() const;
};

#endif
