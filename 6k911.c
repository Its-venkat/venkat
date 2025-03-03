#include<stdio.h>
#include<math.h>
int main()
{
	float A,S,a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	S=(a+b+c)/2;
	A= sqrt (S*(S-a)*(S-b)*(S-c));
	printf("%f\n",A);
	return 0;
}
