#include<stdio.h>
main()
{
	float income,tax;
	printf("please enter your yearly income\n");
	scanf("%f",&income);
	if(income<=100000)
	
		printf("no need to pay tax\n");
		
	else
	{
		if(income<=200000)
		{
			printf("your tax will be 10% of your total income\n");
			tax=0.1*(income-100000);
			printf("your tax is=%f\n",tax);
		
		}
		else
		{
			printf("your tax will be 10% of your total income\n");
			tax=0.2*(income);
			printf("your tax is=%f\n",tax);
		
		}
	}
}
