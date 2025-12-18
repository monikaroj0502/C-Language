#include<stdio.h>
int main()
{
	int i,n,sum=0;
    printf("enter number");
    scanf("%d",&n);
        int a[n];
          	for(i=0; i<n; i++)
        {
        	printf("enter number:");
        	scanf("%d",&a[i]);
		}
          printf("\n display elements:");
          
        for(i=0; i<n; i++)
        {
        	sum=sum+a[i];
        	printf("%d\t",a[i]);
		}
    printf("\n sum of all elements=%d",sum);
}
