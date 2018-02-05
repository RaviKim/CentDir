#include <iostream>	//	Declaration Headerfile

int main(void)

{
	int num = 20;

	/*Basic Out put
	  std is namespace.
	  std::cout << 'output target 1' << 'output target2' << 'output target3';
	  std::endl : carriage return
	 */
	
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;

	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;

}
