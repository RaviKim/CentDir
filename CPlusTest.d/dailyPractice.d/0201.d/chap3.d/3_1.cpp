#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Point
{
	int xpos;
	int ypos;

void MovePos(int x, int y)
{
	xpos 	= 	xpos + x;
	ypos 	= 	ypos + y;
}

void AddPoint(const Point &pos)
{

	xpos += pos.xpos;
	ypos += pos.ypos;
}

void ShowPosition()
{

	cout <<"[" << xpos <<", " << ypos<<"]" << endl;

}
};

int main(void)
{

//	Point *pptr1 = new Point;
//	pptr1 -> xpos = 10;
//	pptr1 -> ypos = 30;

	Point pos1 	= 	{12, 4};
	Point pos2 	= 	{20, 30};

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();	//	[5,	14] Out

	pos1.AddPoint(pos2);
	pos1.ShowPosition();	//	[24, 44] Out



//	delete ppos;
	return 0;
}
