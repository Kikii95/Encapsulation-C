#include <iostream>
#include "Vector.h"
#include <sstream>


Vector2::Vector2() {
	SetPosition();
}



int Vector2::GetPosition() {
	std::cout << "Get x or y ?\n";
	while (Choice > 1 ) {
		std::cout << "(0 or 1) : ";
		std::cin >> Choice;
	}
	if (Choice == 0) {
		return x;
	}
	if (Choice == 1) {
		return y;
	}
}



void Vector2::SetPosition() {
	std::cout << "Set x : ";
	std::cin >> x;
	std::cout << "Set y : ";
	std::cin >> y;
}