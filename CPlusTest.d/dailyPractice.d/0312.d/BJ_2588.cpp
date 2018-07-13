#include <iostream>
using namespace std;

int main()
{
	int first, second;
	int result;

	cin >> first >> second;


	int f_result, s_result, t_result;

	f_result = first * (second % 10);	//	 5
	s_result = first * ((second % 100) / 10 );	//	 8
	t_result = first * (second / 100);	//	 300
	result = first * second;

	cout << f_result << endl;
	cout << s_result << endl;
	cout << t_result << endl;
	cout << result << endl;

	
	
}
