#include<stdio.h>
#define PI 3.14

int main()
{
	float radious,area;
	float circle(float radious);
	scanf("%2f",&radious);
	area=circle(radious);
	printf("Area of a circle=%2f",area);
}
float circle(float radious)
{
	//float area;
	float area;
	area=PI*radious*radious;
	return (area);
}
