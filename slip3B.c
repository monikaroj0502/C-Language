#include<stdio.h>
int main()
{
	char a[20];
	int i;
	printf("enter string:");
	gets(a);
	 
	  for(i=0; a[i]>'\0'; i++)
	  {
	  	if(a[i]==' ')
	  	   a[i]='*';
	  }
    puts(a);
}
