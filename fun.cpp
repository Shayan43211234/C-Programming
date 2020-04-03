#include<stdio.h>
int add(int a, int b)
{
	int c=a+b;
	return(c);
}
main()
{
	int add(int a, int b);
	int c=add(3,5);
	printf("%d",c);
}
