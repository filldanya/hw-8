#include <iostream>
#include "Right_triangle.h"

Right_triangle::Right_triangle(int a, int b, int c, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		C = 90;
		name = "пр€моугольный треугольник";
		if (C != 90) 
		{
		throw std::exception("”гол C не равен 90");
		}
	}