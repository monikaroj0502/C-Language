#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
       clrscr();
  printf("enter values 1");
    scanf("%d",&a);
  printf("enter values 2");
    scanf("%d",&b);
  printf("enter values 3");
    scanf("%d",&c);
if(a>b && a>c);
    printf("%d is greater",a);
if(b>a && b>c)
    printf("%d is greater",b);
else
    printf("%d is greater",c);

return 0 ;
}
