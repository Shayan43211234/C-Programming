#include<stdio.h>
#include<math.h>
main()
{
	int n;
	int a[100];
	int sum=0;
	float avg,std;
	printf("please enter how many number you want to get a mean=");
	scanf("%d",&n);
	printf("please enter your numbers=");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("your mean is =%f\n",avg);
	for(int i=1;i<=n;i++)
	{
		sum=sum+(avg-a[i])*(avg-a[i]);
	}
	std=sqrt(sum);
	printf("your standerd division is=%f",std);
}
