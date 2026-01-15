#include<stdio.h>
int main()
{
	float a,b,temp;
	int ch;
	//menu
	printf("\n1.swap the values");
	printf("\n2.calculate arithmetic mean and harmonic mean");
	printf("enter choice");
	scanf("%d",&ch);
	 //values
	 printf("enter two number:");
	 scanf("%d%d",&a,&b);
	  switch(ch)
	  {
	  	case 1:
	  		{
	  			temp=a;
	  			a=b;
	  			b=temp;
	  		 printf("swapping=%d%d",a,b);
	  		 break;
			}
		case 2:
			{
				printf("\narithmetic=%f",(a+b)/2);
				printf("\nharmonic=%f",(2*a*b)/(a+b));
				break;
			}
	  	
	    default:
	    	printf("invalid choice");
	  }
}
