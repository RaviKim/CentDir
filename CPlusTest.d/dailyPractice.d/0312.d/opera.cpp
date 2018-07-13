#include <iostream>
#include <stdio.h>
using namespace std;

struct v_vector
{
	double x;
	double y;
};

v_vector operator * (double a, v_vector b)
{
	v_vector r;
	r.x = a * b.x;
	r.y = a * b.y;

	return r;
};


int main()
{
	v_vector k, m;
	k.x = 2;
	k.y = 4;

	m = 3.141927 * k;
	cout << "(" << m.x << "," << m.y << ")" << endl;

	return 0;
}
