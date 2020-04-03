#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float disc,d,root1,root2;
	printf("please enter your discrement values of A & B & C\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("your entered discrement values are %d & %d & %d\n",a,b,c);
	disc=b*b-4*a*c;
	if(disc>0)
	{
		printf("the roots are real");
		d=sqrt(disc);
		root1=(-b+d)/(2*a);
		root2=(-b-d)/(2*a);
		printf("\nthe roots are %d & %d",root1,root2);
		}
	else
	{
		if(disc==0)
		{
			printf("the roots are equal");
			d=sqrt(disc);
			root1=(-b+d)/(2*a);
			root2=(-b-d)/(2*a);
			printf("\nthe roots are %d & %d",root1,root2);
		}
		else
		{
			printf("\nthe roots are imagenary");
			d=sqrt(disc);
			root1=(-b+d)/(2*a);
			root2=(-b-d)/(2*a);
			printf("\nthe roots are %d & %d",root1,root2);
		}
	}
	
}
