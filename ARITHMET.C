#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
   clrscr();
   printf("enter number");
   scanf("%d%d",&a,&b);

	  c=a+b;
   printf("addition=%d",c);

	  c=a*b;
   prinft("multiplcation=%d",c);

	  c=a/b;
   printf("division=%d",c);

	  c=a-b;
   printf("substrcation=%d",c);

	   c=a%b;
   printf("reminder=%d",c);
   getch();
   return 0;
}
