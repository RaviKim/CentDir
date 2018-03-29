#include <iostream>
#include <cstring>
using namespace std;


void PUSH();
void POP();
void SIZE();
void EMPTY();
void TOP();

int cnt = 0;
int memcount = 0;
int sizeCount = 0;
int *saveArray = new int[10000];

int main(void)
{
	cin >> cnt;
	char *command = new char[10000];
	for (int i = 0; i < 10000; i++)
	{
		saveArray[i] = 0;
	}

	int count = cnt;
	while (count--)	// cnt 만큼 반복
	{
		cin >> command;
		
		if (!strcmp(command, "push")){PUSH();}

		if (!strcmp(command, "pop")){POP();}

		if (!strcmp(command, "top")){TOP();}

		if (!strcmp(command, "size")){SIZE();}

		if (!strcmp(command, "empty")){EMPTY();}

		if (!strcmp(command, "exit")){
			cout << "Finished Programed" << endl;
			break;
		}
	}

	delete[] saveArray;
	delete[] command;
}

void PUSH() {
	int num = 0;
	cin >> num;
	saveArray[memcount] = num;
	memcount++;
}
void POP() {
	if (saveArray[0] == 0 && memcount == 0)
	{
		cout << "-1" << endl;	// stack이 비어있으면 -1 출력
	}
	else
	{
		cout << saveArray[memcount - 1] << endl;		// POP 처리
		saveArray[memcount - 1] = 0;	// 비우기
		if (memcount > 0)
			memcount--;
	}
}
void SIZE() {
	for (int i = 0; i < cnt; i++)
	{
		if (saveArray[i] != 0)
			sizeCount++;	//	count
	}

	cout << sizeCount;
	sizeCount = 0; // reset
	cout << endl;
}
void EMPTY() {
	if (saveArray[memcount - 1] != 0)
	{
		cout << "0";
	}
	else
		cout << "1";

	cout << endl;
}
void TOP() {
	if (saveArray[memcount - 1] != 0)
	{
		cout << saveArray[memcount - 1];
	}

	else
	{
		cout << "-1";
	}
	cout << endl;
}
