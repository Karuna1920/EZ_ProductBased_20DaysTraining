#include<iostream>
#include<stdio.h>
struct employee 
{
	int id;
	char code;
};

int main()
{
	employee e;
	printf("size of struct is: %d", sizeof(e));
	return 0;
}

