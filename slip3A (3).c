#include<stdio.h>
int main()
{
	float k,c,f;
	printf("enter fahrenheit:");
	scanf("%f",&f);
	 c=5.0/9*(f-32);
	 k=c+273.15;
	printf("\nkelvin=%f",k);
	printf("\ncelsius=%f",c); 
}

