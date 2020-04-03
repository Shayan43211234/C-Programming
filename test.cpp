#include<stdio.h>
main()
{
	int dic7(int n);
	int n;
	printf("\n please enter the number\n");
	scanf("%d",&n);
	printf("%d",dic7(n));
}
void dic7(int n)
{
	if(n%7==0)
	{
		printf("\n%d is divided by 7",n);
	}
	else
	{
		printf("\n%d is not divided by 7",n);
	}
}
