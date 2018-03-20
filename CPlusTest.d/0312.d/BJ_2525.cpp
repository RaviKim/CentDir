#include <iostream>
using namespace std;

void ClockCheck(int a, int b, int c)
{
	int minute = c % 60; // minute
	int time = c / 60; // Hour

	a += time;
	b += minute;

	if( b >=60){
		a++;
		b %= 60;
	}

	if( a >=24)
		a %= 24;

	cout << a <<" "<< b << endl;
}






int main(void)
{
	int Hour;	// A
	int minute;	// B

	int CookingTime; 	// C

	cin >> Hour >> minute ;
	cin >> CookingTime;

	if(CookingTime > 1001 || CookingTime < 0 || Hour < 0 || Hour > 23 || minute < 0 || minute > 59)
		cout << "Input Right number " << endl;

	ClockCheck(Hour, minute, CookingTime);
}
