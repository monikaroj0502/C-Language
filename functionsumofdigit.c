#include<stdio.h>
void sum1(int num)
{
	int d,sum=0;
	while(num>0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("sum=%d",sum);
}
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	sum1(num);
}
