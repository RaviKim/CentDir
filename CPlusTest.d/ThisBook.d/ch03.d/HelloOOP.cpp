#include <iostream>
#include <cstdio>
using namespace std;

class USERDATA{
	public:
		int nAge;
		char szName[32];

		void Print(void){
			printf("%d, %s\n", nAge, szName);
		}
};

int main(void){
	USERDATA user = {10, "ravi"};

	user.Print();
}
