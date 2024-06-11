#include <stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
	int i,n,f=1;
	n=atoi(argv[i]);
	for(i=1;i<=n;i++)
	f*=i;
	printf("factorial of %d=%d",n,f);
}