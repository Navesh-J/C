#include<stdio.h>
void main()
{
	int i,j,m,n;
	printf("Enter the rows and columns of the matrix respectively : \n");
	scanf("%d%d",&m,&n);
	int arr[m][n],arr2[n][m];
	printf("Enter matrix elements : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEntered matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr2[j][i]=arr[i][j];
		}
	}
	printf("\nTransposed matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
}