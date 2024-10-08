#include <iostream>  // Inclut la bibliothèque standard d'entrée/sortie
#include "Parent.h"

using namespace std;  // Utilise l'espace de nom standard (pour éviter d'écrire std:: à chaque fois)

int main() {
    // Utilisation d'un pointeur de type Parent mais qui pointe sur un objet Enfant
    Parent* objet = new Enfant();

    // Appel de la méthode virtuelle
    objet->afficherMessage();  // Cela appellera la méthode de la classe Enfant grâce au mot-clé virtual

    // Libération de la mémoire et appel des destructeurs
    delete objet;

    return 0;
}
