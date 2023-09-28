#include<stdio.h>
void sum(int,int []);
int main()
{
	int i,n,a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(n,a);
}
void sum(int n,int a[])
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("%d",s);
}
