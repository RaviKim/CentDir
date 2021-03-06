#include <stdio.h>
#include <string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int hash(int key){
	return key % 10;
}


void AddKey(int key){
	int bucket;
	bucket = hash(key);

	if(	hashtable[bucket][0] 	==	0){
		hashtable[bucket][0]	=	key;
	}
}

bool FindKey(int key){
	int bucket;
	bucket = hash(key);
	return (hashtable[bucket][0]	==	key);
}

int main(void){
	int i , key;
	
	memset(hashtable, 0, sizeof(hashtable));
	
	for(i = 0; i<5; i++){
		printf("%d 번째 값을 입력하세요:", i+1);
		scanf("%d", &key);
		AddKey(key);
	}
	
	printf("검색할 키를 입력하세요 : ");
	scanf("%d", &key);
	
	if(FindKey(key)){
		puts("검색되었습니다.");
	}
	
	else{
		puts("입력하신값은 없습니다.");
	}
}
