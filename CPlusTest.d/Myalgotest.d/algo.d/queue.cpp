#include <iostream>
#include <stdio.h>
#include <string.h>

//////////////////////////////////////////////////////////
//Global Parameter.
/////////////////////////////////////////////////////////

int cnt = 0;
int number = 0;
char *command = new char[100];
int *array = new int[100];

////////////////////////////////////////////////////////
//Declaration Function
////////////////////////////////////////////////////////

void _init();
void _pop();
void _input();
void _empty();
void _showQueueMem();
void _size();


///////////////////////////////////////////////////
//main Start.
//////////////////////////////////////////////////

int main(void)
{
	std::cin >> cnt; // command input coverage.
	std::cin >> command;

	_init();// Intialize QueueArray '0'	

	while(cnt--)
	{
		if(!strcmp(command, "pop")){ _pop();}	
		if(!strcmp(command, "input")){_input();}
		if(!strcmp(command, "show")){_showQueueMem();}
		if(!strcmp(command, "empty")){_empty(); }
		if(!strcmp(command, "size")){_size();}
	}

	std:: cout << "End Queue Program" << std::endl;

	delete [] command;
	delete [] array;
	return 0;
}


void _init()
{
	for( int i = 0; i < 100; i++)
	{
		array[i] = 0;
	}
}

void _pop()
{
	for(int i = 0; i < 100; i++)
	{
		std::cout << "POP number :  " << array[i];
	}
}

void _input()
{
for ( int i = 0; i < cnt; i++)
{
if(array[0] !=0)
{
	if(array[i] = 0)
	{
	
	}

}
else
	array[0] = 1;
}

}

void _empty()
{
	if(array[0] != 0) std::cout << "Queue is not empty!" << std::endl;
	else 
		std::cout << "Queue is empty" << std::endl;
}
void _showQueueMem()
{
	for( int i = 0; i < cnt; i++)
	{
		std::cout << array[i]<<"|";
	}
	std::cout << std::endl;
}

void _size(){
	int sizecount = 0;	
	if(array[0] !=0)
	{
		for( int i = 0 ;  i < cnt; i++)
		{
			if(array[i] != 0)
				sizecount++;
		}
		std:: cout << "Size is :" << sizecount << std::endl;
	}
	else
		std:: cout << " size is 0" << std::endl;
}

