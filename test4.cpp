#include<stdio.h>
#include<string.h>
main()
{
	int factorial(int n);
	int n;
	char master_list[5][10]={"tubai","shayan","sanjoy","lila","sushmita"};
	char member_name[100];
	printf("pls enter your name\n");
	scanf("%[^\n]s",member_name);
	for(int i=0;i<5;i++)
	{
			if(strcmp(member_name,master_list[i])==0)
				{
					printf(":) welcome Mr.%s\n",member_name);
					printf("pls enter your number what you want to know the factorial\n");
					scanf("%d",&n);
					printf("your result is %d",factorial(n));
				}
			else
				{
					printf("\nsorry! you are not our customer\n");
				}
	}
}

int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return(fact);
}
