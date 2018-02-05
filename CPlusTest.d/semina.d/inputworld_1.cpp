#include <iostream>

/*
Basic Input 
std is namespace.
std::cin >> 'parameter' ;

*/


int main(void)
{
	int val1;
	std::cout << "Input First number : ";
	std::cin >> val1;

	int val2;
	std::cout << "Input Second number : ";
	std::cin >> val2;

	int result =	val1	+	val2;
	std::cout << "Add Result is : " << result << std::endl;
	return 0;
	
}
