#include<stdio.h>
main()
{
	int i,j,p,t,r,SI,mi,a,b,c,d,e,in,i1,T;
	scanf("%d %d %d",&p,&t,&r);
	SI=p*t*r/100;
	mi=SI/12;
	printf("Month amount withdrawn:");
	scanf("%d",&i);
	a=mi*(i-1);
	printf("Amount withdrawn:");
	scanf("%d",&b);
	c=p-b;
	printf("Month amount deposited:");
	scanf("%d",&j);
	in=c/100*(12-j+1);
	printf("Amount deposited");
	scanf("%d",&d);
	e=c+d;
	i1=e/100*(12-j+1);
	T=a+in+i1+e;
	printf("%d",T);
}
