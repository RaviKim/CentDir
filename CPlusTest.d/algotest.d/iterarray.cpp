#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	int * it;

	for(it = &arr[0]; it!=&arr[5]; it++)
		printf("%d\n", *it);
}
