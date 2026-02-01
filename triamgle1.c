#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	ch='A';
	for(i=1; i<=3; i++)
       {
       	for(j=3; j>=i; j--)
       	 {
       	   printf("%c\t",ch++);	
	     }
	     printf("\n");
	   }
      
}
