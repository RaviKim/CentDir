#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
}USERDATA;

void PrintData(USERDATA *pUser)
{
	printf("%d , %s\n", pUser -> nAge , pUser ->szName);
}

int main(void)
{
	USERDATA user = {20, "Ravi"};
	PrintData(&user);

	return 0;
}
