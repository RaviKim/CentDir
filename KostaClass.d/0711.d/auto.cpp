#include <iostream>
#include <memory>
using namespace std;

int main(){
	auto_ptr<double> rate(new double);
	auto_ptr<int>	Array(new int[5]);

	*rate = 3.1415;
	cout << *rate << endl;
	
	&Array[0] =1;
	Array[0] = 1;
	*Array[1] = 2;

	cout << *Array[0] << endl;
}
