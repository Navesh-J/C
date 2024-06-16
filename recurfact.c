#include<stdio.h>
void main()
{
	int n;
	printf("Enter N ");
	scanf("%d",&n);
	int f=fact(n);
	printf("FACTORIAL BY RECURSION = %d",f);
}
int fact(int n)
{
	if(n==0)
	return 1;
	else if(n==1)
	return 1;
	else
	{
		return n*fact(n-1);
	}
}