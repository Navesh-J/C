#include<stdio.h>
int gcd(int , int);
void main()
{
	int a,b;
	printf("Enter 2 numbers ");
	scanf("%d%d",&a,&b);
	printf("GCD is : %d",gcd(a,b));
	
}
int gcd(int a,int b)
{
	if (b!=0)
	return gcd(b,a%b);
	else 
	return a;
}