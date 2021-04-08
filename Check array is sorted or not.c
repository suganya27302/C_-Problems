#include <stdio.h>

int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++)
    {
      scanf(" %d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=1;
            }
        }
    }
    if(temp==0)
    {
        printf("array is sorted");
    }
   else
   printf("array is unsorted");
    return 0;
}
