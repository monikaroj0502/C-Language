#include<stdio.h>
int main()
{
	int i,j,A,B;
	printf("enter range:");
	scanf("%d%d",&A,&B);
	  for(i=1; i<=10; i++)
	  {
	  	for(j=A; j<=B; j++)
	  	  {
	  	  	
	  	  	printf("\t%d",i*j);
	  	  	
		  }
		  
		  printf("\n");
	  	
	  }
}
