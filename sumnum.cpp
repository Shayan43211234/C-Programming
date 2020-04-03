#include<stdio.h>
main()
{
	int n;
	printf("please enter a number");
	scanf("%d",&n);
	int num=n;
	int sum=0;
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	printf("\nthe sum of %d is %d",num,sum);
}
