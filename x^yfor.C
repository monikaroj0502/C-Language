#include<stdio.h>
 int main()
 {
 	int x,y,ans=1,i;
 	  
 	  printf("enter numbers:");
 	  scanf("%d%d",&x,&y);
 	  
 	   for(i=1; i<=y; i++)
 	    {
 	    	ans=ans*x;
		}
      printf("%d raise to %d=%d",x,y,ans);
}
