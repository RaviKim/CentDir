#include <stdio.h>

typedef struct
~
 USERDATA
{
	int num;
	char array[32];

}USERDATA;

void PrintData(USERDATA *pUser)
{
	printf("%d, %s\n", pUser->num , pUser -> array);
}
int main(void)
{
USERDATA user = {20, "Ravi"};
PrintData(&user);

return 0;
}
