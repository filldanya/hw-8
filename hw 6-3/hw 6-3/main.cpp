#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Figure_Error.h"

void print(Figure* figure) {
	figure->print_info();
}

int main() {
	setlocale(LC_ALL, "RUS");
	Figure* ptr;
	try 
	{
		Triangle triangle(10, 20, 30, 50, 900, 70);

		print(&triangle);
	}
	catch (const std::exception& e) 
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Right_triangle right_triangle(10, 20, 30, 50, 60);
		print(&right_triangle);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
		print(&isosceles_triangle);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Equilateral_triangle equilateral_triangle(30);
		print(&equilateral_triangle);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
		print(&quadrangle);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Rectangle rectangle(10, 20);
		print(&rectangle);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Square square(20);
		print(&square);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Parallelogram parallelogram(20, 30, 30, 40);
		print(&parallelogram);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
	try
	{
		Rhombus rhombus(30, 30, 40);
		print(&rhombus);
	}
	catch (const std::exception& e)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}
}