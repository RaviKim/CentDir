#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	int i;
	printf("Input array Size : ");
	cin >> num;
	vector<int> vi(num);

	for(i = 0; i < num ; i++)
	{
		vi[i]=i*2;
	}
	for(i = 0; i < num ; i++){
		printf("vi [%d] = %d\n", i, vi[i]);
	}
	printf("Vector size is : %d\n" , vi.size());
}
