#include "Triangle.h"
#include <iostream>
#include "Figure_Error.h"
	int Triangle::get_a() {
		return a;
	}
	int Triangle::get_b() {
		return b;
	}
	int Triangle::get_c() {
		return c;
	}
	int Triangle::get_A() {
		return A;
	}
	int Triangle::get_B() {
		return B;
	}
	int Triangle::get_C() {
		return C;
	}
	void check() {

	}
	Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;

		if (A + B + C != 180) 
		{
			throw std::exception("сумма углов не равна 180");
		}
		
	}
	std::string Triangle::get_name() {
		return name;
	}
	Triangle::Triangle() {}
	void Triangle::print_info() {
		std::cout << name << std::endl;
		std::cout << "Стороны: " << "a = " << a << ' ' << "b = " << b << ' ' << "c = " << c << std::endl;
		std::cout << "Углы: " << "A = " << A << ' ' << "B = " << B << ' ' << "C = " << C << std::endl;
	}