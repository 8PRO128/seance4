#include "Voiture.h"

int main() {
    Voiture maVoiture;
    
    maVoiture.afficherEtat();

    maVoiture.accelerer();
    maVoiture.afficherEtat();
    
    maVoiture.freiner();
    maVoiture.afficherEtat();
    
    return 0;
}