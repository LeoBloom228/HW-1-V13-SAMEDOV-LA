
#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>

//Задание 1

int main()

{

	double a, b, result;

	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;

	result = ((a * a) + (b * b)) / (1 - (((a * a * a) - b) / 3));

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Result: " << result << std::endl;

	return 0;

}

