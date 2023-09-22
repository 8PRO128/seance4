

void augmentation(Employe e, double pourcentage) {
  e.salaire += e.salaire * pourcentage / 100;
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
  augmentation(e1, 10);
  cout << "Salaire: " << e1.get_salaire() << endl;
}