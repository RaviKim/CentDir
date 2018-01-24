#if 0
#include <stdio.h>


int main(void){
	char str[] = "Have a nice day";

	puts(str);

	fputs(str, stdout);
	fputs("\n", stdout);

	return 0;

}
#endif

#if 0
#include <stdio.h>

int main(void){
	char str[10];

	fputs("gets String input : ", stdout);
	gets(str);
	puts(str);

	fputs("fgets string input : ", stdout);
	fgets(str, sizeof(str), stdin);
	puts(str);

	return 0;
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

int main(void){
	char str[100] = "Have a nice day";
	int len = 0;

	len = strlen(str);

	printf("String length is %d\n", len);
	return 0;
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

int main(void){
	char str1[10] = "Beautiful";

	strcpy(str1, "dirty");
	puts(str1);

	return 0;
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

int main(void){
	char str1[] = "CProgramming";
	char str2[20];

	strcpy(str2, str1);
	puts(str2);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>

int main(void){
	char str1[5];
	strcpy(str1, "Beautiful");
	puts(str1);

	return 0;
}

#endif

#if 0
#include <stdio.h>
#include <string.h>

int main(void){
	char dest[15] = "I am";
	char src[] = "a student";

	strcat(dest, src);
	puts(dest);

	return 0;
}


#endif

#if 0
#include <stdio.h>
#include <string.h>

int main(void){
	char dest[100] = "I am";
	char src1[] = " not a student";
	char src2[] = " a nice guy";

	strncat(dest, src1, 4);
	puts(dest);
	strcat(dest, src2);
	puts(dest);

	return 0;
}

#endif

#if 1
#include <stdio.h>
#include <string.h>

int main(void){
	int ret1, ret2, ret3;
	char s1[] = "ABC";
	char s2[] = "ABC";
	char s3[] = "ABB";
	char s4[] = "ABD";

	ret1 = strcmp(s1, s2);
	ret2 = strcmp(s1, s3);
	ret3 = strcmp(s1, s4);

	printf("ret1's result value is : %d\n", ret1);
	printf("ret2's result value is : %d\n", ret2);
	printf("ret3's result value is : %d\n", ret3);

	return 0;
}

#endif
