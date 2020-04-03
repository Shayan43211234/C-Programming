#include<stdio.h>
main()
{
	int n;
	int digit=0;
	printf("please enter how many number you want to print\n");
	scanf("%d",&n);
	do{
		printf("your ans is=%d\n",++digit);
	}while(digit<=n);
}
