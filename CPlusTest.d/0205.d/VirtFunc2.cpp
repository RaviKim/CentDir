#include <iostream>
#include <cstdio>

using namespace std;

class Base
{
	public:
		virtual void OutMessage() {printf("Base Class \n"); }
};

class Derived : public Base
{
	virtual void OutMessage() {printf("Derived Class\n"); }
};

void Message(Base *pB)
{
	pB -> OutMessage();
}

int main()
{
	Base B;
	Derived D;

	Message(&B);
	Message(&D);
}
