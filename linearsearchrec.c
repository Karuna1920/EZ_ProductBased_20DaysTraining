#include<stdio.h>
void linearsearch(int [],int,int,int);
int main()
{
	int arr[20],size,se,i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&se);
	linearsearch(arr,size,se,0);
}
void linearsearch(int arr[],int size,int se,int position)
{
	if(position>=size)
	 printf("Value not found");
	else if(arr[position]==se)
	 printf("Value found");
	else
	linearsearch(arr,size,se,position+1);
}
