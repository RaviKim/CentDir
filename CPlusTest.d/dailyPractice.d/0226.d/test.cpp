#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	for(int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5-i ; j++)
			printf(" ");

		for( int k = 1; k <= i*2-1; k++)
			printf("*");

		printf("\n");
	}

	return 0;
}
