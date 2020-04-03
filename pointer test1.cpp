#include<stdio.h>
main()
{
	int a=10;
	int c=10;
	int *p;
	int *q;
	p=&a;
	q=&c;
	int b;
	b=*p+*q;
	printf("%d",b);	
}
