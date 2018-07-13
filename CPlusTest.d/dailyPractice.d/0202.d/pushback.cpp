#include <iostream>
#include <vector>
#include <cstdio>


using namespace std;

int main()
{
	int cnt;
	int num;
	vector<int> vi;

	cin >> num;
	for(cnt = 0; cnt<num; cnt++)
	{
		vi.push_back(cnt *2);
	}

	for(cnt = 0; cnt < num; cnt++)
	{
		printf("vi[%d] = %d\n", cnt, vi[cnt]);
	}

	printf("--Vector's size is %d--\n", vi.size());
}
