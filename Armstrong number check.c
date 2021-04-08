#include<stdio.h>
#include<math.h>
int main()
{  
    int n,count=0,original,r,sum=0;
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    n=original;
    while(n>0)
    {
       r=n%10;
       sum=sum+pow(r,count);
       n/=10;
    }
    if(original==sum)
     printf("It is an armstrong number");
    else
     printf("It is not an armstrong number");
    return 0;
}
