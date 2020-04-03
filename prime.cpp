#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("please enter a number=");
	scanf("%d",&n);
	int c;
	c=(sqrt(n));
	if(c==0)
	printf("is not a prime number");
	else
	printf("is a prime number");
}
