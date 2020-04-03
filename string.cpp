#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10],str[20];
	str1[10]={'H','E','L','L','O','W','','\0'};
	str2[10]={'W','O','R','L','D','','\0'};
	strcpy(str,str1);
	strcat(str,str2);
	printf("%s",str);
	return 0;
}
