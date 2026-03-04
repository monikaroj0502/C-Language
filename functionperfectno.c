#include<stdio.h>
void perfect(int num)
{
	int i,sum=0;
	for(i=1; i<num; i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("number is perfect");
	}
	else
	{
		printf("number is not perfect");
	}
}
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	
	perfect(num);
}
