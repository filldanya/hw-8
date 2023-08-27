#include "Figure_Error.h"
#include <iostream>
Figure_Error::Figure_Error(const char* message) : message{message } {}

const char* Figure_Error::what() const override {
	return message.c_str();
} 