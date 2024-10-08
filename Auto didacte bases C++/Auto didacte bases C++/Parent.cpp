#include "Parent.h"
#include <iostream>

using namespace std;

Parent::Parent() {
    cout << "Construction de Parent" << endl;
}

Parent::virtual void afficherMessage() {
    cout << "Je suis le parent." << endl;
}