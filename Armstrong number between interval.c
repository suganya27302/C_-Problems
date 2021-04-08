#include<stdio.h>
#include<math.h>
int main()
{  
    int n,m,i,count=0,original,r;
    int sum=0;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;++i){
    original=i;
    while(original>0)
    {
        original/=10;
        count++;
    }
    original=i;
    while(original>0)
    {
       r=original%10;
       sum=sum+pow(r,count);
       original/=10;
    }
    if(sum==i)
    {
      printf("%d",i);
    }
    count=0;
    sum=0;
    }
    return 0;
}

