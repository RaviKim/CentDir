#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename C> void dump(const char *dsec, C c)
{
	cout.width(12);
	cout << left << dec << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
}



int main()
{
	vector<int> v1;
	dump("v1",v1);
	vector<double> vDouble(10);
	dump("vDouble", vDouble);
	vector<int> v3(10,7);
	dump("v3", v3);

	vector<int> v4(v3);
	dump("v4",v4);

	int array[] = {1,2,3,4,5,6,7,8,9};
	vector<int> v5(&array[2],&array[5]);
	dump("v5", v5);



	printf("max_size = %d\n", v1.max_size());
	printf("size = %d , capacity = %d\n", v1.size(), v1.capacity());
	v1.push_back(123);
	v1.push_back(456);

	printf("size = %d, capacity = %d\n", v1.size(), v1.capacity());

}
