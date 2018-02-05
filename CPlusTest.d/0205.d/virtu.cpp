#if 0
#include <iostream>
using namespace std;

class First
{
	public:
		void FirstFunc()
		{
			cout << " First Func" << endl;
		}
};

class Second: public First
{
	public:
		void SecondFunc()
		{
		cout << "SecondFunc" << endl;
		}
};

class Third : public Second
{
	public:
		void ThirdFunc()
		{
		cout << "Third FUnc" << endl;
		}
};

int main(void)
{
	Third *tptr = new Third();
	Second *sptr = tptr;
	First *fptr = sptr;

	fptr -> FirstFunc();
	cout << "---------"<<endl;
	sptr -> FirstFunc();
	cout << "---------"<<endl;
	sptr -> SecondFunc();
	cout << "---------"<<endl;
	tptr -> FirstFunc();
	cout << "---------"<<endl;
	tptr -> SecondFunc();
	cout << "---------"<<endl;
	tptr -> ThirdFunc();
	cout << "---------"<<endl;

}


#endif

#if 1
#include <iostream>
using namespace std;

class First
{
	public:
		virtual void MyFunc() {cout << "FirstFunc" << endl;	}
};

class Second : public First
{
	public:
		virtual void MyFunc(){cout << "Second Func " << endl;}
};

class Third : public Second
{
	public:
		virtual void MyFunc(){cout << "Third Func" << endl;}
};

int main(void)
{
	Third *tptr = new Third();
	Second *sptr = tptr;
	First *fptr = sptr;

	fptr -> MyFunc();
	sptr -> MyFunc();
	tptr -> MyFunc();

	delete tptr;
	return 0;

}



#endif
