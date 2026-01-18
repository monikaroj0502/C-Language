#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter number ");
	scanf("%d%d",&a,&b);
      
      for (c=a; c<=b; c++)
      {
      	if(c%2==0 && c%3==0)
      	 printf("%d\n",c);
	  
    else
    printf("%d",c);
	}
    
}
