#include<stdio.h>
void main()
{
	int r,temp;
	printf("Armstrong numbers are : ");
	for(int i=1;i<=1000;i++)
	{
		temp=i,r=0;
		while(temp>0)
		{
			int d=temp%10;
			r+=d*d*d;
			
			temp/=10;
		}
		
		if(r==i)
		printf("%d  ",i);
	}
}