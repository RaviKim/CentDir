#include <stdio.h>
#include <iostream>

using namespace std;

int a;
double b;

int student [10];

int student[100];




int num;
fputs("Input Student numbers : ", stdout);
scanf("%d" , &num);
int student[num];


char* pData = new char;
int* pTest = new int;


char* pData[] = new char;
int* pTest[] = new int;


delete pData;
delete pTest;

delete [] pData;
delete [] pTest;
