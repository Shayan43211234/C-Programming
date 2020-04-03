#include<stdio.h>
main()
{
	int n;
	int i=0;
	int sum=0;
	printf("enter number=");
	scanf("%d",&n);
	do{
		sum=sum+i+1;
		i++;
	}while(i<n);
	printf("%d",sum);
}
