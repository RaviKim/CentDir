#include <iostream>
#include <vector>
using namespace std;
/*
int main(void)
{
	cout << "This is a vector Test" << endl;

	int num; // vector size
	int cnt; // counter param

	cout << "Input Vector Number : " ;
	cin >> num;
	vector<int> array(num);


	for(cnt = 0; cnt < num; cnt++)
	{
		array[cnt] = cnt+1;
	}

	for(cnt = 0; cnt < num; cnt++)
	{
		printf("array[%d] = %d\n" , cnt, array[cnt]);
	}
	cout << " array[] size is " << array.size() << endl;
}
*/

int main()
{
	int i;
	vector<int> vi;

	for(i =0 ; i < 10; i++)
	{
		vi.push_back(i*2);
	}
	for(i = 0; i < 10; i++)
	{
		printf("vi[%d] = %d\n" , i, vi[i]);
	}
	printf("Vector size is %d \n", vi.size());
}
