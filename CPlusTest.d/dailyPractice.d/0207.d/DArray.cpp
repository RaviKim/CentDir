#include <iostream>
using namespace std;
#define ELETYPE int

class DArray
{
	protected:
		ELETYPE *ar;
		unsigned size;
		unsigned num;
		unsigned growby;

	public:
		DArray(unsigned asize=100, unsigned agrowby = 10);
		~DArray();
		void Insert(int idx, ELETYPE value);
		void Delete(int idx);
		void Append(ELETYPE value);
		
		ELETYPE GetAt(int idx) {return ar[idx];}
		unsigned GetSize() { return size;}
		unsigned GetNum() {return num; }
		void SetAt(int idx, ELETYPE value) {ar[idx] = value;}
		void Dump(char *sMark);
};

DArray::DArray(unsigned asize, unsigned agrowby)
{
	size = asize;
	growby = agrowby;
	num = 0;
	ar = (ELETYPE *) malloc(sizeof(ELETYPE) * size);
}
DArray::~DArray()
{
	free(ar);
}
void DArray::Insert(int idx, ELETYPE value)
{
	unsigned need;
	need	=	 num+1;
	if(need > size)
	{
		size	=	need	+	growby;
		ar		=	(ELETYPE*)realloc(ar, sizeof(ELETYPE)*size);
	}
	memmove(ar+idx+1, ar+idx, (num-idx) * sizeof(ELETYPE));
	ar[idx] = value;
	num++;
}



int main()
{
	D Array ar;
	int i;

	for(i = 1; i <= 8 ; i++)	ar.Append(i); ar.Dump("Add '8'");
	ar.Insert(3,10); ar.Dump("10 Input");
	ar.Insert(3,11); ar.Dump("11 Input");
	ar.Insert(3,12); ar.Dump("12 Input");
	ar.Delete(7);	 ar.Dump("Param 7 Delete");

}
