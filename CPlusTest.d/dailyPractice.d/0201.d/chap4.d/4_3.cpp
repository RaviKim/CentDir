#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;
namespace COMP_POS
{
	enum
{
CLERK=0,
SENIOR,
ASSIST,
MANAGER
};
}

class NameCard
{
	private:
	public:
		void ShowNameCardInfo();
};

void NameCard ShowNameCardInfo()
{

}

int main(void)
{
	NameCard manClerk();
	NameCard manSENIOR();
	NameCard manAssist();

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}
