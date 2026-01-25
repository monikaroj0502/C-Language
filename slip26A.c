#include<stdio.h>
int main()
{
	char a[5];
	int i,cnt=0;
	printf("enter string:");
	gets(a);
	   
	    for(i=0; a[i]>'\0'; i++)
	    {
	    	cnt++;
		}
    printf("lenght=%d",cnt);
}
