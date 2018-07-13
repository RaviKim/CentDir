#include <iostream>

using namespace std;

class Parent{
	public:
		void func() {cout << "Parent's func call" << endl; }
};

class child : public Parent{
	public:
		void func() {cout << "Child's class " << endl; }
};

int main()
{
	Parent P, *pP;
	child C;

	pP=&P;
	pP->func();
	pP=&C;
	pP->func();
	return 0;
}
