#include <iostream>

int function(std::string str, int forbidden_length) {
	if (str.length() != forbidden_length) {
		return str.length();
	}
	throw "bad_length";
}
int main() {
	std::string str;
	setlocale(LC_ALL, "RUS");
	int forbidden_length = 0;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	while (str.length() != forbidden_length) {
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
			int result = function(str, forbidden_length);
			std::cout << "Длина слова " << str << " равна " << str.length() << std::endl;
		}
		catch(const char* error)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания";
			
		}
	}
}