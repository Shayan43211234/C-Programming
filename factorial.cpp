#include<stdio.h>
int factorial(int n)
{
	if(n>0)
	{
		
		int c=(n*factorial(n-1));
		return (c);
	}
	else
		return 1;
}
main()
{
	int n,c;
	int factorial(int n);
	printf("plesae enter your number");
	scanf("%d",&n);
	c=factorial(n);
	printf("your ans is",c);
}
