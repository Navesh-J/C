#include<stdio.h>
void main()
{
	int i,n,pos,x;
	printf("Enter Size of array : ");
	scanf("%d",&n);
	int arr[n],arr1[n+1];
	printf("Enter Elements : \n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter position at which element to be inserted : ");
	scanf("%d",&pos);
	printf("Enter element to be inserted : ");
	scanf("%d",&x);
	for(i=0;i<n+1;i++)
	{
		if(i<pos-1)
		arr1[i]=arr[i];
		else if(i==pos-1)
		arr1[i]=x;
		else
		arr1[i]=arr[i-1];
	}
	printf("AFTER INSERTION\n");
	for(i=0;i<n+1;i++)
	printf("%d\t",arr1[i]);
}