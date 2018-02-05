#include <iostream>

int MyFunc(int num)	//	1
{
	num++;
	return num;
}

int MyFunc(int a, int b)	//2
{
	return a + b;
}


int main(void)
{
	std::cout << MyFunc(20) << std::endl;// Call MyFunc(int num) 	 // 1
	std::cout << MyFunc(30, 40)<<"\n";		 // Call MyFunc(int a, int b) // 2
	return 0;
}

