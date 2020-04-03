#include<stdio.h>
main()
{
	int n;
	int sum=0;
	printf("enter your value=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nyour result=%d",sum);
	
}

