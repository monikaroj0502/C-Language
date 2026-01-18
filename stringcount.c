#include<stdio.h>
int main()
{
	
 char s1[50],ch;
  int i,c=0;
  printf("enter string:");
  gets(s1);
 
      printf("enter ch:");
      scanf("%c",&ch);
    for(i=0; s1[i]>'\0'; i++)
    {
    	if(s1[i]==ch)
    	{
    		c++;
		}
	}
 printf("count =%d",c);
}
