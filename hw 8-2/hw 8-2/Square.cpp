
#include <iostream>
#include "Square.h"

Square::Square(int a) {
		this->a = a;
		this->c = a;
		this->b = a;
		this->d = a;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
		name = "Квадрат";
		if (A != 90 && B != 90 && C != 90 && D != 90 && a != c && a != b && a != c && a != d)
		{
			throw std::exception("Это не прямоугольник");
		}
	}
