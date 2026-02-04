#include<stdio.h>
void even(int num)
{
    if(num%2==0)
    printf("even");
    else
    printf("odd");
}
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	even(num);
}
