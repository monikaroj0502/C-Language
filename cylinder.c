#include<stdio.h>
int main()
{
	float s,v,r,h;
	printf("enter r and h:");
	scanf("%f%f",&r,&h);
	 s=2*3.14*r*(r+h);
	 v=3.14*r*r*h;
	printf("surface=%f",s);
	printf("volumne=%f",v);
}
