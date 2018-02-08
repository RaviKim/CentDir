#if 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char str1[] = "1024";
	char str2[10];
	int total = 0;

	fputs("Input Integer : ", stdout);
	fgets(str2, sizeof(str2), stdin);

	total = atoi(str1) + atoi(str2);

	printf("Add result is : %d\n", total);
	return 0;

}
#endif

#if 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str1[10];
	char str2[10];

	int result = 0;

	fputs("Input Two numbers : ", stdout);
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	result = atoi(str1)+atoi(str2);

	printf("Add result is : %d\n", result);

	return 0;
}

#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr1[20]={0,};
	int result = 0;
	int len, cnt;

	fputs("Input String : ", stdout);
	fgets(arr1, sizeof(arr1), stdin);	// input string parameter

	len = strlen(arr1);
		
	for(cnt = 0; cnt < len; cnt++){
		result += atoi(arr1[cnt]);
		if(arr1[cnt] == '\0') break;
	}
	printf("result is %d\n", result);
}

#endif
#if 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr1[20]	=	{0,};
	int result 		=	 0;
	int len, cnt;
	char* arr2[20]={NULL,};

	fputs("Input String : ", stdout);
	fgets(arr1, sizeof(arr1), stdin);	// input string parameter

	len = strlen(arr1);

	char *ptr;
	ptr = strtok(arr1, " ");

	while(ptr != NULL){
		arr2[cnt]=ptr;
		cnt++;
		ptr = strtok(NULL," ");
	}

	for (cnt = 0; cnt < len; cnt++){
		if(arr2[cnt] != NULL){
			//printf("%s\n", arr2[cnt]);
			result += atoi(arr2[cnt]);
		}	
	}
	printf("%d\n", result);
	}

#endif
