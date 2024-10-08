// Classe dérivée (Enfant) qui hérite de Parent
class Enfant : public Parent {
public:
    // Constructeur
    Enfant() {
        cout << "Construction de Enfant" << endl;
    }

    // Redéfinition de la méthode afficherMessage()
    void afficherMessage() override {
        cout << "Je suis l'enfant." << endl;
    }

    // Destructeur
    ~Enfant() {
        cout << "Destruction de Enfant" << endl;
    }
};