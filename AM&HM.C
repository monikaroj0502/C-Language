#include<stdio.h>
int main()
{
	int a,b,AM,HM;
	printf("enter value a and b:");
	scanf("%d%d",&a,&b);
	 AM=(a+b)/2;
	 HM=a*b/(a+b);
	 printf("\nAM=%d",AM);
	 printf("\nHM=%d",HM);
}
