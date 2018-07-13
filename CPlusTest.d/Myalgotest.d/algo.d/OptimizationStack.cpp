#include <iostream>
#include <cstring>
#include <stdio.h>
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
	//cin >> cnt;
	scanf("%d", &cnt);

	char *command = new char[10000];
	for (int i = 0; i < 10000; i++)
	{
		saveArray[i] = 0;
	}

	int count = cnt;
	while (count--)	// cnt 만큼 반복
	{
	//	cin >> command;
		scanf("%s", command);

		if (!strcmp(command, "push")) { PUSH(); }

		if (!strcmp(command, "pop")) { POP(); }

		if (!strcmp(command, "top")) { TOP(); }

		if (!strcmp(command, "size")) { SIZE(); }

		if (!strcmp(command, "empty")) { EMPTY(); }

		if (!strcmp(command, "exit")) {
			//cout << "Finished Programed" << endl;
			printf("Finished Programed\n");
			break;
		}
	}

	delete[] saveArray;
	delete[] command;
}

void PUSH() {
	int num = 0;
	//cin >> num;
	scanf("%d", &num);
	saveArray[memcount] = num;
	memcount++;
}
void POP() {
	if (saveArray[0] == 0 && memcount == 0)
	{
		//cout << "-1" << endl;	// stack이 비어있으면 -1 출력
		printf("-1\n");
	}
	else
	{
		//cout << saveArray[memcount - 1] << endl;		// POP 처리
		printf("%d\n", saveArray[memcount - 1]);
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

	//cout << sizeCount;
	printf("%d\n", sizeCount);
	sizeCount = 0; // reset
	//cout << endl;
}
void EMPTY() {
	if (saveArray[memcount - 1] != 0)
	{
		//cout << "0";
		printf("0\n");
	}
	else
		//cout << "1";
		printf("1\n");

	//cout << endl;
}
void TOP() {
	if (saveArray[memcount - 1] != 0)
	{
		//cout << saveArray[memcount - 1];
		printf("%d", saveArray[memcount - 1]);
	}

	else
	{
		//cout << "-1";
		printf("-1");
	}
	//cout << endl;
	printf("\n");
}
