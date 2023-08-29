#include <iostream>
#include "Rectangle.h"
#include "Figure_Error.h"
Rectangle::Rectangle(int a, int b) {
		this->a = a;
		this->c = a;
		this->b = b;
		this->d = b;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
		name = "Прямоугольник";
		if (A != 90 && B != 90 && C != 90 && D != 90 && a != c && b != d)
		{
			throw std::exception("Это не прямоугольник");
		}
	}
