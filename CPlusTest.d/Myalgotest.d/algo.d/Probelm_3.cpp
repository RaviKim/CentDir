#include <iostream>
using namespace std;

int main(void)
{
	int cnt = 0;
	int repeat = 0;

	cin >> repeat;  // input repeat Param.
	
	// 입력받은 만큼 반복.
	for (int r = 0; r < repeat; r++)
	{
		cout << "[\"" << r << "\"]";
		cout << endl;
	}
	

}
