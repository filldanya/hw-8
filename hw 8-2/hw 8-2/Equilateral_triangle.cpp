#include <iostream>
#include "Equilateral_triangle.h"
Equilateral_triangle::Equilateral_triangle(int a) {
		this->a = a;
		this->b = a;
		this->c = a;
		A = 60;
		B = 60;
		C = 60;
		name = "�������������� �����������";
		if (a != b && a != c && A != B && A != C)
		{
			throw std::exception("����������� �� ��������������");
		}
	}

