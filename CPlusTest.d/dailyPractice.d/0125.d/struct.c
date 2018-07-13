#if 0
#include <stdio.h>
#include <string.h>



struct Person{
	char name[20];
	int age;
	char address[100];
};

int main(){
	struct Person p1;

	strcpy(p1.name, "Ravi");
	p1.age = 30;
	strcpy(p1.address, "Bundang");

	printf("Name : %s\n", p1.name);
	printf("Age : %d\n", p1.age);
	printf("Address : %s\n", p1.address);

	return 0;
}
#endif

#if 1
#include <stdio.h>
#include <string.h>

struct Person{
	char name[20];
	int age;
	char address[100];
}p1;


int main(){
strcpy(p1.name, "Ravi");
p1.age = 30;
strcpy(p1.address, "Seoul");

printf("Name : %s\n", p1.name);
printf("Age : %d\n", p1.age);
printf("Address : %s\n", p1.address);

return 0;
}

#endif
