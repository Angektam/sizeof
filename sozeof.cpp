#include <iostream>

int main()
{
	std::cout << "boo:\t\t" << sizeof(bool) << "bytes\n;
	std::cout << "char:\t\t" << sizeof(char) << "bytes\n";
	std::cout << "wchar:\t\t" << sizeof(wchar_t) << "bytes\n";
	std::cout << "char16_:\t\t" << sizeof(char16_t) << "bytes\n";
	std::cout << "char32_:\t\t" << sizeof(char32_t) << "bytes\n";
	std::cout << "shot:\t\t" << sizeof(shot) << "bytes\n";
	std::cout << "itn:\t\t" << sizeof(int) << "bytes\n";
	std::cout << "long:\t\t" << sizeof(long) << "bytes\n";
	std::cout << "long long:\t\t" << sizeof(long long) << "bytes\n";
	std::cout << "float:\t\t" << sizeof(float) << "bytes\n";
	std::cout << "double:\t\t" << sizeof(double) << "bytes\n";
	std::cout << "long double:\t\t" << sizeof(long double) << "bytes\n";
	return 0;
}
