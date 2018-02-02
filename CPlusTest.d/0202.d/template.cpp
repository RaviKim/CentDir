#include <string>
#include <iostream>

using namespace std;

/*template <typename T>
T myadd(T x, T y)
{
	return x+y;
	bool operator+(myadd<double,long> &x)
{
	return x.first + x.second;
}
}
*/

template <typename T1 , typename T2>
class myadd
{

	public :
	void sum(T1 x, T2 y)
	{
		cout <<  x + y << endl;
	}

	bool operator+(myadd<double,long> &x)
	{
		return x.first + x.second;
	}

};

int main (void)
{
	myadd<int, int > data;
	data.sum(1,2);
	data.sum ('a' , 'b');

	sum<double, long> data2;
	data2.sum(1.2, 2);
}	
