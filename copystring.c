#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],a2[15];
	 printf("enter string:");
	 gets(a);
	  
	    printf("string=%s",a);
	strcpy(a2,a);
	   printf("\ncopy string=%s",a2);
}
