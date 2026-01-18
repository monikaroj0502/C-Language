#include<stdio.h>
int main()
{
	int num,num1,sum=0,c=1,a;
	printf("eneter number :");
	scanf("%d",&num);
	
	num1=num;
	
	 while(num>0)
	  {
	  	a=num%10;
	  	c=a*a*a;
	  	sum=sum+c;
	  	num=num/10;
	  }
	  if(num1==sum)
       {
		   printf("\nnumber is armstrong");
	    
	    	if(num%2==0)
	    	 printf("\nthe armstrong is even :");
	    	else
	  		 printf("\nthe armstrong is odd:"); 
	  	}  
	  else 
	    printf("\nnumber is not armstrong");
}
