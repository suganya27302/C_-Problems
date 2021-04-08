#include <stdio.h>

int main()
{
    int n,r,sum=0,original;
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
   if(original==sum)
    printf("It is an armstrong number ");
   else
    printf("It is not an armstrong number");

    return 0;
}
