#include <stdio.h>

int main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
      count=1;
      break;
    }
    }
    if(n==1)
      printf("neither prime nor composite");
    else
    {
    if(count==1)
      printf(" NOT prime number");
    else
      printf("PRIME NUMBER");
    }
    return 0;
}
