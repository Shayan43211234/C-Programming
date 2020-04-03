#include<stdio.h>
main()
{
	int weight;
	printf("please enter your weight");
	scanf("%d",&weight);
	while(weight>80)
	{
		printf("GO FOR THIS COURSE\n");
		printf("YOUR WEIGHT WILL BE SURELLY LOSS\n");
		printf("please enter your weight");
		scanf("%d",&weight);
		/*if(weight<60)
		{
			printf("you will done\n");
		}
		else
		{
			printf("you will carry on\n");
		}*/
	}
}
