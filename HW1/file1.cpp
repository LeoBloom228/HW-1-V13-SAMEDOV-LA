
#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>

//Exercise 1

void task1 ()

{

	double a, b, result;

	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;

	result = ((a * a) + (b * b)) / (1 - (((a * a * a) - b) / 3));

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Result: " << result << std::endl;

}

//Exercise 2

void task2 ()
{
const double PI = 3.14;


	double l;

	std::cout << "l: ";
	std::cin >> l;

	double r = l / (2 * PI);

		std::cout << "Radius of a circle is: " << r << std::endl;

}

//Exercise 3


void task3()

{

	int number;

	std::cout << "Please, enter a number: ";
	std::cin >> number;

	bool isThreedigit = (number >= 100 && number <= 999);
	if (!isThreedigit)
	{
		std::cout << "Error. Please, enter a three-digit number! " << std::endl;
		return;
	}
	
	int first_digit = number / 100;
	int last_digit = number % 10;

	std::cout << ((first_digit > last_digit) ? "The first digit is higher that the last digit." :
		(first_digit < last_digit) ? "The last digit is higher that the first digit." :
		"The first digit and the last digit are equal.") << std::endl;

}

int main()

{

	task1();
	task2();
	task3();

	return 0;

}