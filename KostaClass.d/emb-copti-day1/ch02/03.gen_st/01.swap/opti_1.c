#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap(void *dest, void *src, int size);

int main()
{
	char name[][20] = {"kim", "lee"};
	int score[] = {10, 20};
	short age1=17, age2=34;
	float height1=100.1F, height2=200.2F;
	int i;

	printf("before : name ==> %s,%s\n", name[0], name[1]);
	printf("before : age ==> %d,%d\n", age1, age2);
	printf("before : score ==> %d,%d\n", score[0], score[1]);
	printf("before : height ==> %.1f,%.1f\n", height1, height2);
	swap(name[0], name[1], 20);
	swap(&age1, &age2, sizeof(short));
	swap(&score[0], &score[1], sizeof(int));
	swap(&height1, &height2, sizeof(float));
	printf("-------------------------------------\n");
	printf("after : name ==> %s,%s\n", name[0], name[1]);
	printf("after : age ==> %d,%d\n", age1, age2);
	printf("after : score ==> %d,%d\n", score[0], score[1]);
	printf("after : height ==> %.1f,%.1f\n", height1, height2);
	printf("\n\n");
}
#if 0
int swap(void *dest, void *src, int size)
{
	//size를 받고 byte단위로 받아서 변경시키는것임.
	int i;
	char t;
	for(i = 0; i < size; dest++,src++,i++){
		t = *((char*)dest);
		*((char*)dest) = *((char*)src);
		*((char*)src) = t;
	}

	

}

#else
int swap(void *dest, void *src, int size)
{
	void*	t = malloc(size);
	memcpy(t, dest,size);
	memcpy(dest,src,size);
	memcpy(src,t,size);

	free(t);


}


#endif
