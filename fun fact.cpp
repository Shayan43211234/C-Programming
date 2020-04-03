#include<stdio.h>
int fact(int n)
{
	int c=1;
	for(int i=1;i<=n;i++)
	{
		c=c*i;
	}
	return(c);
}
main()
{
	//int fact(int n);
	int n,c;
	printf("\nplease enter the number\n");
	scanf("%d",&n);
	//c=fact(n);
	printf("%d",fact(n));
}

