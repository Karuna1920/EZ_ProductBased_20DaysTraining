#include<stdio.h>
main()
{
	int i,m,n,n1,a[100];
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		while(a[i]>=10&&a[i]<=40)
		{
		scanf("%d",&a[i]);
	}
	}

		for(i=0;i<n1;i++)
		{
			if(a[i]%2==0)
			{
				printf("%d",a[i]);
			}
		}
}
