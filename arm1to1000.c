#include<stdio.h>
int main()
{
	int i,sum,c,num,d;
	 for(i=1; i<=1000; i++)
	 {
	 	num=i;
	 	sum=0;
	 	while(num>0)
	 	{
	 		d=num%10;
	 	    c=d*d*d;
	 	    sum=sum+c;
	 	    num=num/10;
		}
		if(i==sum)
		{
			printf("%d\t",i);
	    }
	 }
}
