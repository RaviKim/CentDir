#include <iostream>

int main(int argc, char **argv)
{
	int *pData = new int;
	int *pNewData = new int(10);

	int *arr = new int [5];

	for(int i = 0; i < 5; ++i)
		arr[i] = (i+1) * 10;

	for(int i = 0; i < 5; ++i)
		std::cout << arr[i] << std::endl;

	std::cout << std::endl;
	*pData = 10;

	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;
	delete[] arr;

	return 0;
}
