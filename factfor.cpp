#include<stdio.h>
main()
{
	int n;
	int fact=1;
	printf("pls enter enter what number you want ton know factorial=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nyour result is= %d",fact);
}
