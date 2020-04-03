#include<stdio.h>
main()
{
	int add(int a,int b);
	int a=3;
	int b=3;
	int c;
	//c=add(a,b);
	printf("%d",add(a,b));
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
