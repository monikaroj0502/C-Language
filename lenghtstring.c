#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[20],s2[20];
	int i;

	printf("enter string:");
	gets(s);
	 
	 printf("OG=%s",s);
	  
	  for(i=0; s[i]>'\0'; i++)
	  {
	  	s2[i]=s[i];
	  }
	printf("\nCOPY=%s",s2);
}
