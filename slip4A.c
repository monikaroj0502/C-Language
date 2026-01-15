#include<stdio.h>
int main()
{
	int num,sum=0,d,i;
	printf("enter number:");
	scanf("%d",&num);
	  while(num>0)
	  {
	  	d=num%10;
	  	sum=sum+d;
	  	num=num/10;
	  }
	printf("sum of digit=%d",sum);
}
