#include<stdio.h>
main()
{
	int n;
	printf("pls enter which nunber you what no. you want to enter\n");
	scanf("%d",&n);
	int fibonacci(int n);
	printf("the fibonacci of %d is %d",n,fibonacci(n));
}
int fibonacci(int n)
{
	int a;
	if(n>2)
	{
		a=(n-2)+(n-1);
		return(a);
	}
	else
	{
		return(n);
	}
}
