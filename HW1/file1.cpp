
//#include <iostream>
//#include <cmath>
//#include <cstdio>
//#include <iomanip>

//Задание 1

//int main()

//{

	//double a, b, result;

	//std::cout << "a: ";
	//std::cin >> a;
	//std::cout << "b: ";
	//std::cin >> b;

	//result = ((a * a) + (b * b)) / (1 - (((a * a * a) - b) / 3));

	//std::cout << std::fixed << std::setprecision(2);
	//std::cout << "Result: " << result << std::endl;

	//return 0;

//}

//Exercise 2

//#include <iostream>
//#include <cmath>
//#include <cstdio>
//#include <iomanip>

//const double PI = 3.14;

//int main ()
//{
	//double l;

	//std::cout << "l: ";
	//std::cin >> l;

	//double r = l / (2 * PI);

		//std::cout << "Radius of a circle is: " << r << std::endl;

		//return 0;
//}

//Exercise 3

#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>

int main()

{

	int number;

	std::cout << "Please, enter a number: ";
	std::cin >> number;

	bool isThreedigit = (number >= 100 && number <= 999);
	if (!isThreedigit)
	{
		std::cout << "Error. Please, enter a three-digit number! " << std::endl;
		return 1;
	}
	
	int first_digit = number / 100;
	int last_digit = number % 10;

	std::cout << ((first_digit > last_digit) ? "The first digit is higher that the last digit." :
		(first_digit < last_digit) ? "The last digit is higher that the first digit." :
		"The first digit and the last digit are equal.") << std::endl;


	return 0;

}