#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> myque;
	
	myque.push_back(100);
	myque.push_back(200);

	int i;
	for(i = 0; i<5 ;i++)
	{
	cout << "Queue status ============\n" ;
	cout << myque[i] << endl;
	}
	cout << endl;

	myque.pop_front();
	myque.push_back(300);
	myque.push_back(400);

	cout << myque[0] << endl;
	myque.pop_front();
	cout << myque[0] << endl;

	cout << "Size " << myque.size() << endl;
}
