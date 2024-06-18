#include <stdio.h>
void main()
{
  int i=0,j=0,k=0,a[20],b[20],c[20],m,n,count=0;
  printf("Enter size of Set A ");
  scanf("%d",&m);
  printf("Enter size of Set B ");
  scanf("%d",&n);
  printf("Enter elements of Set A\n");
  for(i=0;i<m;i++)
  scanf("%d",&a[i]);
  printf("Enter elements of Set B\n");
  for(i=0;i<n;i++)
  scanf("%d",&b[i]);
  for(i=0;i<m;i++)
  {
        c[i]=a[i];
        k++;      
    }
 for(i=0;i<n;i++)
  {
    for(j=0;j<k;j++)
    {
        if(c[j]==b[i])
            break;
    }
        if(j==k)
     {
       c[k]=b[i];
       k++;
     } 
  }
  printf("\nSet A= ");
  for(i=0;i<m;i++)
  printf("%d\t",a[i]);
  printf("\nSet B = ");
  for(i=0;i<n;i++)
  printf("%d\t",b[i]);
  printf("\nUnion Set = ");
  for(i=0;i<k;i++)
  printf("%d\t",c[i]);
  k=0;
  for (i = 0; i < m; i++) 
  {
    for (j = 0; j < n; j++) 
    {
      if (a[i] == b[j]) 
      {
        c[k] = b[j];
        k++;
      }
    }
  }
  printf("\nIntersection Set = ");
  for(i=0;i<k;i++)
  printf("%d\t",c[i]);
  k=0;
  for (i=0;i<m;i++) 
  {
    for (j=0;j<n;j++) 
    {
      if (a[i] == b[j]) 
      {
        count=1;
        break;
      }
    }
    if(count==0)
    {
      c[k]=a[i];
      k++;
    }
    count=0;
  }
  printf("\nSet Difference = ");
  for(i=0;i<k;i++)
  printf("%d\t",c[i]);
}