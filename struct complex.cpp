#include<stdio.h>
main()
{
	typedef struct 
	{
		int real;
		int imagenary;
	}complex;
	complex a1,a2,a3;
	printf("\npls enter your 1st number\n");
	scanf("%d",&a1.real);
	printf("\npls enter your 2nd number\n");
	scanf("%d",&a1.imagenary);
	printf("\nyour 1st complex number will be %d+i%d\n",a1.real,a1.imagenary);
	printf("\npls enter your 1st number\n");
	scanf("%d",&a2.real);
	printf("\npls enter your 2nd number\n");
	scanf("%d",&a2.imagenary);
	printf("\nyour 2nd complex number will be %d+i%d\n",a2.real,a2.imagenary);
	a3.real=a1.real+a2.real;
	a3.imagenary=a1.imagenary+a2.imagenary;
	printf("\nyour complex number addition will be %d+i%d\n",a3.real,a3.imagenary);
}
