#include <iostream>
#include <cstdio>

class B{
	private:
		int memB;
	public:
		B() : memB(0x11111111){}
		virtual void f1() {puts("B::f1");}
		virtual void f2() {puts("B::f2");}
		virtual void f3() {puts("B::f3");}
		void normal() {puts ("non virtual");}
};


class D: public B
{
	private:
		int memD;
	public:
		D() : memD(0x22222222){}
		virtual void f1() {puts("D::f1");}
		virtual void f2() {puts("D::f2");}
};


int main()
{
	B *pB;
	B b;
	D d;

	pB = &b;
	pB -> f2();
	pB = &d;
	pB -> f2();
	pB -> f3();
}
