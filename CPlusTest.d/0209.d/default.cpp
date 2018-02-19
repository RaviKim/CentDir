#include <iostream>

int Adder(int num1=1, int num2=2);


int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}


//int TestFunc(int num1, int num2 = 5, int num3 = 7) { . . . }
//TestFunc(10);		//	TestFunc(10, 5,  7);
//TestFunc(10, 20);	//	TestFunc(10, 20, 7);


//int TestFunc(int num1, int num2 , int num3 = 30 ) { . . . }
//int TestFunc(int num1, int num2 = 20, int num3 = 30) { . . . }
//int TestFunc(int num1 = 10, int num2 = 20, int num3 = 30) { . . . }

//int WrongFunc(int num1 = 10, int num2, int num3 ) { . . . }
//int WrongFunc(int num1 = 10, int num2 =20 , int num3 ) { . . . }



