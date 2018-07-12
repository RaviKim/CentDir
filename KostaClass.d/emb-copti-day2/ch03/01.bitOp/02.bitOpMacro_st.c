#include <stdio.h>

#define bitSet(data, loc)	_______
#define bitClear(data, loc)	_______
#define bitCheck(data, loc)	_______
#define bitToggle(data, loc)	(bitCheck(data, loc) ? bitClear(data, loc) : bitSet(data, loc))
//#define bitToggle(data, loc)	_______

int main(void)
{
	unsigned short data, b_data;
	int pos, menu;
	
	printf("Input a short integer data => ");
	scanf("%hx", &data);
	while(1) {
		b_data = data;
		do {
			printf("Bit Test(1.Bit Set, 2.Bit Clear, 3.Bit Toggle, 4:Quit) => ");
			scanf("%d", &menu);
		} while (menu<1 || menu>4);
		if(menu == 4) break;
		
		do {
			printf("Bit Position(0~15, -1:Quit) => ");
			scanf("%d", &pos);
		} while (menu<-1 || menu>15);
		if(pos == -1) continue;
		
		switch(menu) {
			case 1:
				printf("Bit_%d Set of 0x%04X => 0x%04X\n", pos, b_data, bitSet(data, pos));
				break;
			case 2:
				printf("Bit_%d Clear of 0x%04X => 0x%04X\n", pos, b_data, bitClear(data, pos));
				break;
			case 3:
				printf("Bit_%d Toggle of 0x%04X => 0x%04X\n", pos, b_data, bitToggle(data, pos));
				break;
		} 
	}
	return 0;
}
