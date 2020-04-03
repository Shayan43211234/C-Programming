#include<stdio.h>
main()
{
	int n,a;
	int sum=0;
	printf("\nplease enter how many number you want to sum\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("***plese enter your number***");
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("\nyour result is=%d",sum);
}
