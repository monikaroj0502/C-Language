#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[20],s2[20];
	  printf("enter string:");
	  gets(s);
	  printf("enter string:");
	  gets(s2);
	    
	    strcat(s,s2);
	  printf("concatention=%s",s);
	  
}
