#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace BestComImp1
{
	void PrettyFunc(void);
}

void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom's Define Func" << std::endl;
	PrettyFunc();
	ProgComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc(void)
{
	std::cout<<"Hello There!!"<<std::endl;
}
