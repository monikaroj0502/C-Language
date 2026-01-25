#include<stdio.h>
int main()
{
	float l,b,h,s,v;
	printf("enter l,b,h:");
	scanf("%f%f%f",&l,&b,&h);
	  s=2*(l*b+l*h+b*h);
	  v=l*b*h;
	printf("\nsurface area=%f",s);
	printf("\nvolume=%f",v);
}
