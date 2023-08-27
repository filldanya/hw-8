#include <iostream>
#include "Quadrangle.h"

	int Quadrangle::get_a() {
		return a;
	}
	int Quadrangle::get_b() {
		return b;
	}
	int Quadrangle::get_c() {
		return c;
	}
	int Quadrangle::get_d() {
		return d;
	}
	int Quadrangle::get_A() {
		return A;
	}
	int Quadrangle::get_B() {
		return B;
	}
	int Quadrangle::get_C() {
		return C;
	}
	int Quadrangle::get_D() {
		return D;
	}
	Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		if (A + B + C + D != 360)
		{
			throw std::exception("Сумма углов не равна 360");
		}
	}
	std::string Quadrangle::get_name() {
		return name;
	}

	Quadrangle::Quadrangle() {}
	void Quadrangle::print_info(){
		std::cout << name << std::endl;
		std::cout << "Стороны: " << "a = " << a << ' ' << "b = " << b << ' ' << "c = " << c << ' ' << "d = " << d << std::endl;
		std::cout << "Углы: " << "A = " << A << ' ' << "B = " << B << ' ' << "C = " << C << ' ' << "D = " << D << std::endl;
	}