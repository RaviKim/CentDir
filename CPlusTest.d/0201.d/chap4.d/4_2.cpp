#include <iostream>
using namespace std;

/*Base Class */
class Point
{
	private:
		int xpos, ypos;

	public:
		void Init(int x, int y)
		{
			xpos = x;
			ypos = y;
		}
		void ShowPointInfo () const
		{
			cout << "[" << xpos << " , " << ypos << "]" << endl;
		}
};

/*Calculate radius length*/
class Circle 
{
	private:
	Point xpos;
	Point ypos;

	public:

};
/*calculate Inner Circle, Outter Circle*/
class Ring
{
	private:
	public:

void Init(int Ix, int Iy, int Ir, int Ox, int Oy, int Or)
{

}

};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
