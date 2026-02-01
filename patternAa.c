#include<stdio.h>
int main()
{
	int i,j;
	char ch='A';
	for(i=1; i<=4; i++)
	{
		ch='A';
	for(j=1; j<=i; j++)
	  {
	    printf("%c%c\t",ch,ch+32);
		ch++;	
	  }
	  printf("\n");
	}
}
