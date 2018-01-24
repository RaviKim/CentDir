#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	int cnt;
	char str[100];
	char cpstr[100];

	puts("This is a test \n");
	fputs("Input string : ",stdout);
	fgets(str,sizeof(str),stdin);	
	
	int len = strlen(str);// input string's length
	int j;
	for(cnt = 0; cnt < len; cnt++){
	if(str[cnt] == '0'){
		break;
	}
	for(j =0; j <cnt ; j++){
		printf("%c", str[j]);
	}
		printf("\n");
}
}

