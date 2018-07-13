#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>

class Position
{
	private:
		int x;
		int y;
		char ch;

	public:
		Position(int ax, int ay, char ach)
		{
			x = ax;
			y = ay;
			ch = ach;
		}

		void OutPosition()
		{
			cout << add(x, y)<< " ";
			cout << ch << endl;
		}

		int add(int x, int y)
		{
			return x+y;
		}
};

int main()
{
	Position Here(1,2,'A');
	Here.OutPosition();
}
