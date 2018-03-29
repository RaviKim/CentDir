#include <iostream>
using namespace std;


int main(void)
{
	cout << "3-ways Test" << endl;
	cout << "===============" << endl;

	int cnt =0;
	int cnt1 = 1;
	int cnt2 = 2;
	int cnt3 = 3;
	int cnt4 = 4;

cout << "Test 1: ";
cout << (cnt > cnt1) ? cnt : cnt1 ;
cout << endl;

cout << "Test 2: " ;
cout << (cnt > cnt1) ? cnt : cnt1 ? cnt2 : cnt3 ;


}
