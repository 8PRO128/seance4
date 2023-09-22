#include <iostream>
using namespace std;

class Employe {
private:
  string nom;
  double salaire;

public:
  void set_nom(string nom);
  void set_salaire(double salaire);

  string get_nom() const;
  double get_salaire() const;
  void augmentation(double pourcentage);
};

void Employe::set_nom(string nom) {
  this->nom = nom;
}

void Employe::set_salaire(double salaire) {
  this->salaire = salaire;
}

string Employe::get_nom() const {
  return nom;
}

double Employe::get_salaire() const {
  return salaire;
}

void Employe::augmentation(double pourcentage) {
  salaire += salaire * pourcentage / 100;
}

void augmentation(Employe& e, double pourcentage) {
  double salaire = e.get_salaire();
  salaire += salaire * pourcentage / 100;
  e.set_salaire(salaire);
}

int main() {
  Employe e1;
  e1.set_nom("Jean");
  e1.set_salaire(1000);

  cout << "Nom: " << e1.get_nom() << endl;
  cout << "Salaire: " << e1.get_salaire() << endl;  
  return 0;
}