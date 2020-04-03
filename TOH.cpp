#include<stdio.h>
main()
{
	void TOH(int n,char BEG,char AUX,char END);
	int n,z;
	char BEG,AUX,END;
	printf("pls enter how many disk you want to enter");
	scanf("%d",&n);
	printf("\npls enter your three stick name");
	scanf("%c%c%c",&BEG,AUX,END);
	z=TOH(n,BEG,AUX,END);
	printf("\nthe tower of henoi structure will be %d",z);	
}
void TOH(int n,char BEG,char AUX,char END)
{
	if(n>=1)
	{
		TOH(n-1,BEG,END,AUX);
		printf("%c to %c\n",BEG,END);
		TOH(n-1,AUX,BEG,END);
	}
}


