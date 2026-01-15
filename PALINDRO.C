#include<stdio.h>
#include<conio.h>
int main()
{
 int num,i,rev=0,d=0,t;
 clrscr();
 printf("enter number:");
 scanf("%d",&num);
 t=num;
 while(num>0)
 {
  d=num%10;
  rev=rev*10+d;
  num=num/10;
 }
 if(t==rev)
 printf("\nits palindrome");
 else
 printf("\nits not palindrome");
 getch();
 return 0;

}