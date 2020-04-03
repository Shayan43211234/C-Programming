#include<stdio.h>
main()
{
	int n;
	int num;
	int count=0;
	int sum=0;
	printf("\nplease enter how many numbers you want to add\n");
	scanf("%d",&n);
	while(count<n)
	{
		int i=1;
		printf("\nplease enter your %dst number\n",i);
		scanf("%d",&num);
		sum=sum+num;
		count++;
		i++;
	}
	printf("\nyour result is=%d\n",sum);
}
