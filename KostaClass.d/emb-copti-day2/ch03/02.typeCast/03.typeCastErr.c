#include <stdio.h>

#define CPU_CLOCK		16000000
#define BAUD_RATE		19200

int main(void)
{
	unsigned short s1, s2, s3;
	unsigned long l1, l2, l3;
	unsigned char data_l, data_h;
	
	s1 = (unsigned short)(16 * BAUD_RATE);
	s2 = ((unsigned short)CPU_CLOCK/s1) - (unsigned short)1;
	data_l = s2;
	data_h = s2 >> 8;
	printf("s1:%0X, s2:%0X\n", s1, s2);
	printf("data_h:%0X, data_l:%0X\n", data_h, data_l);
	
	printf("-----------------------------\n");
	l1 = (16 * BAUD_RATE);
	l2 = (CPU_CLOCK/l1) - 1;
	data_l = l2;
	data_h = l2 >> 8;
	printf("l1:%0X, l2:%0X\n", l1, l2);
	printf("data_h:%0X, data_l:%0X\n", data_h, data_l);
		
	return 0;
}	
