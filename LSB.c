#include<stdio.h>
int main()
{
	int a;
	printf("enter values:");
	scanf("%d",&a);
	 if(a&1)
	 {
	 	printf("LSB is set");
	 }
	 else
	 {
	 	printf("LSB is not set");
	 }
}
