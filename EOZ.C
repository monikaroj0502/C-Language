#include<stdio.h>
int main()
{
	int e=0,o=0,z=0,num,d;
	
	  printf("enter number :");
	  scanf("%d",&num);
        
        while(num>0)
        {
        	d=num%10;
        	if(d%2==0)
        	e++;
        	else if(d%2==1)
        	o++;
        	else if(d==0)
        	z++;
        	num=num/10;
		}
		printf("even=%d odd=%d zero=%d",e,o,z);
}
