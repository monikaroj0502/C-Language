#include<stdio.h>
#include<conio.h>
void main()
{
  float s,l,b,h,a;
  int ch;
  printf("press 1: area of square");
  printf("press 2: area of rectangel");
  printf("press 3: area of triangle");
  printf("enter your choice :");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
      {
       printf("enter length of side :");
       scanf("%f",s);
       a=s*s;
       printf("area of square=%f",a);
       break;
      }
   case 2:
     {
      printf("enter length & breadth :");
      scanf("%f%f",&l,&b);
      a=l*b;
      printf("area of rectangle=%f",a);
      break;
     }
   case 3:
     {
      printf("enter base & height :");
      scanf("%f%f",&b,&h);



     }








  }














}