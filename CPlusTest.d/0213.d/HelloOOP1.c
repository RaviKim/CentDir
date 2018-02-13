#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
}USERDATA;



int main(void)
{
	USERDATA user = {20, "Ravi"};
	printf("%d, %s\n", user.nAge, user.szName);

	return 0;
}
