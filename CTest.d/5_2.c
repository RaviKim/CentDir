#if 0
#include <stdio.h>
#include <string.h>


int main(void){
	char str1[] = "abcd";
	char str2[] = "abce";

	int ret1 = strcmp(str1,str2);
	if (ret1 < 0 )
		printf("str2 is longer than str1\n");
	else if(ret1 = 0)
		printf("str1 and str2 is same string\n");
	else
		printf("str1 is longer than str2\n");

	char str3[10];
	char str4[10];

	puts("Input two string");
	gets(str3);
	gets(str4);

	int ret2 = strcmp(str3, str4);

	if (ret2 < 0 )
		printf("str4 is longer than str3\n");
	else if(ret2 = 0)
		printf("str3 and str4 is same string\n");
	else
		printf("str3 is longer than str4\n");


}
#endif

#if 1
#include <stdio.h>
#include <string.h>


int main(void){
	char str1[] = "abcd";
	char str2[] = "abce";

	int ret1 = strcmp(str1,str2);
	if (ret1 < 0 )
		printf("str2 is longer than str1\n");
	else if(ret1 = 0)
		printf("str1 and str2 is same string\n");
	else
		printf("str1 is longer than str2\n");

	char str3[10];
	char str4[10];

	puts("Input two string");
	fgets(str3,sizeof(str3), stdin);
	fgets(str4,sizeof(str4), stdin);

	int ret2 = strcmp(str3, str4);

	if (ret2 < 0 )
		printf("str4 is longer than str3\n");
	else if(ret2 = 0)
		printf("str3 and str4 is same string\n");
	else
		printf("str3 is longer than str4\n");


}

#endif
