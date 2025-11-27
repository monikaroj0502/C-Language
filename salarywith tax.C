#include<stdio.h>
int main()
{
	int sal,tax;
	printf ("enter salary");
	scanf("%d",&sal);
	if(sal<150000)
	printf("basic salary with tax=%d",sal);
	if (sal>150000 && sal<300000)
	{ tax=sal*20/100;
	sal=sal-tax;
	printf("salary with tax=%d",sal);}
	if(sal>300000)
	{tax=sal*30/100;
     sal=sal-tax;
     printf("salary with tax=%d",sal);}

printf("salary with tax =%d",sal);
}
