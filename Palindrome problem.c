#include<stdio.h>
int main()
{
    int n,temp,sum=0,m,r;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        sum =sum *10+r;
        n/=10;
    }
   if (m==sum)
    printf("Palindrome");
    else
    printf("Not a palindrome");
    return 0;
}
