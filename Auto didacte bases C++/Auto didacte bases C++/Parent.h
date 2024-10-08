#pragma once

// Classe de base (Parent)
class Parent {
public:
    // Constructeur
    Parent();

    // Méthode virtuelle pour pouvoir être redéfinie dans les classes dérivées
    virtual void afficherMessage();

    // Destructeur virtuel
    virtual ~Parent() {
        cout << "Destruction de Parent" << endl;
    }
};