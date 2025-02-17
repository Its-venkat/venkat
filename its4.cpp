#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	printf("enter the side:");
	scanf("%f",&a);
	float area=(sqrt(3)/4)*a*a;
	printf("area=%f",area);
	return 0;
}
