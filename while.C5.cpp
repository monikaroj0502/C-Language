#include<stdio.h>
 int main()
 {
 	int num,num1,rev=0,m;
 	
 	printf("enter number:");
 	scanf("%d",&num);
 	   
		num1=num;
 	 
 	while(num>0)
 	  {
 	     m=num%10;
		 rev=rev*10+m;
		 num=num/10; 	
      }
        if(num1==rev)
          printf("\n its palindrome:");
        else
          printf("\n not palindrome:");
}
