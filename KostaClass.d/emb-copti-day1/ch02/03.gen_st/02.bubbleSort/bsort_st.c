#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	NAME_SIZE	20

//void bsort(void *base, int nelem, int size,int (*fcmp)(const void*, const void*));

void bsort(void *, int , int ,int (*)(const void*, const void*));
int fcmp1(const void* d1, const void* d2)
{
	if(*((int*)d1)	> *((int*)d2) )	return 1;
	else if(*((int*)d1)	< *((int*)d2) )	return -1;
	else return 0;
	
}

int fcmp_string (const void* d1 ,const void* d2){
	return strcmp((char *) d1, (char*) d2);
} 
int main()
{
	int score[] = {78, 23, 86, 33, 98, 42};
    char name[][NAME_SIZE] = {"yang", "lee", "kim", "park", "kang"};
	int i;

	printf("Before Sort....\n");
	for(i=0; i<sizeof(score)/sizeof(int); i++)
		printf("%d ", score[i]);
	printf("\n\n");

	bsort(score, sizeof(score)/sizeof(int), sizeof(int), fcmp1);

	printf("After Sort....\n");
	for(i=0; i<(sizeof(score)/sizeof(int)); i++)
		printf("%d ", score[i]);
	printf("\n\n");

    printf("============================================\n");
	printf("Before Sort....\n");
	for(i=0; i<sizeof(name)/NAME_SIZE; i++)
		printf("%s ", name[i]);
	printf("\n\n");

	bsort(name, sizeof(name)/NAME_SIZE, NAME_SIZE, fcmp_string);

	printf("After Sort....\n");
	for(i=0; i<sizeof(name)/NAME_SIZE; i++)
		printf("%s ", name[i]);
	printf("\n\n");

	return 0;
}

void bsort(void *base, int nelem, int size,int (*fcmp)(const void*, const void*))
{
	int step, cmp, change;
    int rst;

	for(step=1; step<=nelem-1; step++) {
      change = 0;
      for(cmp = 1; cmp<=nelem-step; cmp++) {
		if(fcmp(base+(cmp-1)*size, base+ (cmp)*size) > 0) {	
			swap(base+(cmp-1)*size, base+(cmp)*size, size);
            change = 1;
		}
	  }
	  if(change == 0) break;
    }
}


