#include<stdio.h>
#include<math.h>
void main()
{
	int a,n;
	printf("Press 1 for Binary Input  OR  2 for decimal input : ");
	scanf("%d",&a);
	printf("Enter the number : ");
	scanf("%d",&n);	
	if(a==1)
	{
		int s=0,i=0;
		while(n>0)
		{
		int d=n%10;
		if(d==1)
		s+=pow(2,i);
		n/=10;
		i++;
	    }
	    printf("Decimal equivalent : %d",s);
	}
	else if(a==2)
	{
		int r=0,bin=1;
		while(n>0)
		{
		int d=n%2;
			r+=d*bin;
			n=n/2;
		    bin*=10;
    	}		
		printf("Binary equivalent : %d",r);	
    }
    else
    printf("Invalid Input");
}

