#include<stdio.h>

main()
{
	char o;
	int a,b,c;
	printf("\nEnter your choice\n");
	printf("1.ADDITION\n2.DIVITION\n3.SUBTRACTION\n4.MULTIPLICATION\n");
	scanf("%c",&o);
	switch(o)
	{
	
		case '1':
			
			int add(int a, int b);
			printf("\nplease enter your 1st value to addition\n");
			scanf("%d",&a);
			printf("\nplease enter your 2nd value to addition\n");
			scanf("%d",&b);
			c=add(a,b);
			printf("\nyour result is = %d\n",c);
			break;
			
		case '2':
			
			int div(int a,int b);
			printf("\nplease enter your 1st value to divition\n");
			scanf("%d",&a);
			printf("\nplease enter your 2nd value to divition\n");
			scanf("%d",&b);
			c=div(a,b);
			printf("\nyour result is = %d\n",c);
			break;
			
		case '3':
				
				int sub(int a, int b);
				printf("\nplease enter your 1st value to subtraction\n");
				scanf("%d",&a);
				printf("\nplease enter your 2nd value to subtraction\n");
				scanf("%d",&b);
				c=sub(a,b);
				printf("\nyour result is = \n",c);
				break;
				
			case '4':
				
				int mul(int a, int b);
				printf("\nplease enter your 1st value to multiplication\n");
				scanf("%d",&a);
				printf("\nplease enter your 2nd value to multiplication\n");
				scanf("%d",&b);
				c=mul(a,b);
				printf("\nyour result is = \n",c);
				break;
				
			default:
				
				printf("\n Error 404! not found\n");
				break;
				
		}
		return 0;
				
			
}
int add(int a, int b)
{
	int c;
	c=a+b;
	return (c);	
}
int div(int a, int b)
{
	int c;
	c=a/b;
	return (c);
}
int sub(int a, int b)
{
	int c;
	c=a-b;
	return (c);
}
int mul(int a, int b)
{
	int c;
	c=a*b;
	return (c);
}
