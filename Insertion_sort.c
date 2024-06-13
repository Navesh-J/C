#include <stdio.h>
void main()
{
    int n,temp;
    printf("Enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0&&temp<=arr[j])
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
    printf("After Sorting \n");
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
}