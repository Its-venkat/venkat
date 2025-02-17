#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,y;
	scanf("%f%f%f",&a,&b,&c);
	x=(-b+sqrt(b*b-4*a*c)/2*a);
	y=(-b-sqrt(b*b-4*a*c)/2*a);
	printf("%f%f",x,y);
	return 0;
}
