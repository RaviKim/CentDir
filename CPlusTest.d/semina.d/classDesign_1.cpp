#include <iostream>
using namespace std;
class Date
{
	private:
		int month;
		int day;
		int year;
	public : 
	void Date(int imonth, int iday, int iyear);
};

class Month{
	private:
		explicit Month(int m);
		int val;
	public:
	static Month Jan() { return Month(1); }
	static Month Feb() { return Month(2); }
	static Month Mar() { return Month(3); }

};

Date :: int Date(int imonth, int iday, int iyear) {
	month = imonth;
	day = iday;
	year = iyear;
	cout << month << day << year << endl;
	}


int main(void)
{
}
