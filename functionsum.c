#include<stdio.h>
void sum1(int l)
{
	 int i,sum=0;
	 for(i=1; i<=l; i++)
	 {
	 	sum=sum+i;
	 }
	 printf("sum=%d",sum);
}
void main()
{
	int l;
	printf("enter limit:");
	scanf("%d",&l);
	sum1(l);
}
