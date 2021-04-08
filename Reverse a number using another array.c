#include <stdio.h>

int main()
{   int n,i,j;
    int a[20],b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}

