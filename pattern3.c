#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter size n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==0)||(j==0)||(i==n-1)||(j==n-1))
			printf("X ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
}