
#include <iostream>
#include "Parallelogram.h"
Parallelogram::Parallelogram(int a, int b, int A, int B) {
		this->a = a;
		this->c = a;
		this->b = b;
		this->d = b;
		this->A = A;
		this->C = A;
		this->B = B;
		this->D = B;
		name = "Ïאנאככוכמדנאלל";
		if (A != C && B != D  && a != c && b != d )
		{
			throw std::exception("Ýעמ םו ןאנאככוכמדנאלל");
		}
	}
Parallelogram::Parallelogram(){}
