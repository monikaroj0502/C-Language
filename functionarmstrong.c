#include<stdio.h>
void arm(int num)
{
	int tem,d,sum=0,c;
	 tem=num;
	while(num>0)
	{
		d=num%10;
		c=d*d*d;
		sum=sum+c;
		num=num/10;
	}
	if(tem==sum)
	printf("number is armstrong");
	else
	printf("number is not armstrong");
	
}
void main()
{
 int num;
 printf("enter number:");
 scanf("%d",&num);
 arm(num);
}
