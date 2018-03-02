#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int num1, num2;
	stack<int> st;

	for(int cnt = 0; cnt < 3; cnt++)
	{
		cin >> num1;
		st.push(num1);
	}

	while(!st.empty())
	{
	cout << st.top();
	st.pop();
	}

}
