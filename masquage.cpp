#include <iostream>
using namespace std;

int x = 10; // variable globale

int main() {
    int x = 5; // variable locale qui masque la variable globale
    cout << "La variable locale x vaut : " << x << std::endl;

    {
        // variable locale qui masque
        // la précédente variable locale
        int x = 1; 
        cout << "Le x dans le bloc interne : " << x << std::endl;
    }

    cout << "La variable locale x vaut : " << x << std::endl;
    cout << "La variable globale x peut être accédée en utilisant ::x : " << ::x << std::endl;
}