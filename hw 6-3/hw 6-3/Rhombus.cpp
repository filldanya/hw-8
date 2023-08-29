
#include <iostream>
#include "Rhombus.h"

Rhombus::Rhombus(int a, int A, int B) {
		this->a = a;
		this->c = a;
		this->b = a;
		this->d = a;
		this->A = A;
		this->C = A;
		this->B = B;
		this->D = B;
		name = "Ромб";
		if (A != C && B != D && a != c && a != b && a != d)
		{
			throw std::exception("Это не ромб");
		}
	}
	Rhombus::Rhombus() {}