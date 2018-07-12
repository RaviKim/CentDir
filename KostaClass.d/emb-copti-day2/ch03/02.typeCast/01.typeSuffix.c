#include <stdio.h>

int main(void)
{
	char c;		short s;		int i;		unsigned u;
	long l;		long long ll;	float f;	double d;
	long double ld;
	
	c = 1;
	s = 10;
	i = 100;
	u = 200U;
	l = 1000L;
	ll = 10000LL;
	f = 100.1F;
	d = 1000.2;
	ld = 10000.3L;
	
	printf("c:%hhd, s:%hd, i:%d\n", c, s, i);
	printf("u:%u, l;%ld, ll:%lld\n", u, l, ll);
	printf("f:%.1f, d:%.1lf, ld:%.1Lf\n", f, d, ld);
	
	return 0;
}
