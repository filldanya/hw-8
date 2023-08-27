#pragma once
#include <iostream>

class Figure_Error : public std::exception {
public:
	Figure_Error(const char* message);
	
	const char* what() const override;
private:
	std::string message;
};