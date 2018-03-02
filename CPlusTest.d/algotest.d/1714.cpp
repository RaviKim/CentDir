#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int num1;
	char arr1[10];

	stack<char> st;

	cin >> num1;
	for(int cnt = 0; cnt <sizeof(num1);cnt++)
	{
		arr1[cnt] = num1;
		st.push(arr1[cnt]);
	}

	while(!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}


}
