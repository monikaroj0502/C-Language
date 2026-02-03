#include<stdio.h>
int main()
{
	int i;
	for(i=1; i<5; i++)
	{
		if(i%5==0)
		goto a;
	}
	a:
		printf("%d",i);
}
