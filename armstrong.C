#include<stdio.h>
int main()
{
	int num,num1,sum=0,c,d;
	
	printf("enter number :");
	scanf("%d",&num);
	 
	 num1=num;
	 while(num>0)
	 {
	 	d=num%10;
	 	c=num*num*num;
	 	sum=sum+c;
	 	num=num/10;
	 }
	if(num1=sum)
	   printf("number is armstrong");
	else
	   printf("number is not armstrong");
}

