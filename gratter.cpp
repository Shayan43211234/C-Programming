#include<stdio.h>
main()
{
	int a,b,c;
	printf("please enter three numbers=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is gratter among three numbers",a);
	}
	if(b>a&&b>c)
	{
		printf("%d is gratter among three numbers",b);
	}
	else
	{
		printf("%d is gratter among three numbers",c);
	}
	
}
