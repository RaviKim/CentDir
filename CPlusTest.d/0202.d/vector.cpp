#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	int num;
	int i;

	printf(" Input Array size : ");
	scanf("%d" , &num);
	vector<int> vi(num);

	for( i = 0; i < num ; i++)
	{
		vi[i] 	= 	i * 2;
	}

	for( i = 0; i < num ; i++)
	{
		printf("vi [%d] = %d\n", i, vi[i]);
	}

	printf("-- Vector size is %d.-- \n" , vi.size());


}
