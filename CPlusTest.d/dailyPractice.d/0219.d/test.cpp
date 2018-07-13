#include <iostream>
using namespace std;

class Person 
{

private:
	char *Name;
	int Age;

public:
	Person(const char *aName, int aAge) {
	Name=new char[strlen(aName)+1];
	strcpy(Name,aName);
	Age=aAge;
}

Person(const Person &Other)   {
	Name=new char[strlen(Other.Name)+1];
	strcpy(Name,Other.Name);
	Age=Other.Age;
}

~Person() {
	delete [] Name;
}

void OutPerson() {
	printf("NAme : %s Age : %d\n",Name,Age);
}

};

int main()
{
	Person Boy("Ravi",22);
	Person Young=Boy;
	Young.OutPerson();
}
