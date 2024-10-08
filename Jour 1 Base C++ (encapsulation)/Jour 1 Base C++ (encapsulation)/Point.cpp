#include "Point.h"
#include <sstream>

std::string Point::ToString() {
    std::stringstream sVector;
    if (NbPoint == 0) {
        sVector << "\nAucun Point !\n";
    }
    else if (NbPoint == 1) {
        sVector << "Point : v = " << v;
    }
    else if (NbPoint == 2) {
        sVector << "Point : v = " << v << " / w = " << w;
    }
    else if (NbPoint == 3) {
        sVector << "Point : v = " << v << " / w = " << w << "/ x = " << x;
    }
    else if (NbPoint == 4) {
        sVector << "Point : v = " << v << " / w = " << w << "/ x = " << x << " / y = " << y;
    }
    else if (NbPoint == 5) {
        sVector << "Point : v = " << v << " / w = " << w << "/ x = " << x << " / y = " << y << " / z = " << z;
    }

    return sVector.str();
};

Point::Point() {
    std::cout << "Combien de points souhaitez vous entrer ";
    while (NbPoint > 5) {
        std::cout << "(max 5) : ";
        std::cin >> NbPoint;
    }
    

    for (int i = 0; i < NbPoint; i++) {
        if (i == 0) {
            std::cout << "v = ";
            std::cin >> v;
        }
        if (i == 1) {
            std::cout << "w = ";
            std::cin >> w;
        }
        if (i == 2) {
            std::cout << "x = ";
            std::cin >> x;
        }
        if (i == 3) {
            std::cout << "y = ";
            std::cin >> y;
        }
        if (i == 4) {
            std::cout << "z = ";
            std::cin >> z;
        }
    }
}