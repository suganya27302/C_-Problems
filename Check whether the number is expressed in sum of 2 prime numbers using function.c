#include<stdio.h>
int checkprime(int m);
int main()
{ 
    int n,i,j,flag=1;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
{
    if(checkprime(i)==1)
      if(checkprime(n-i)==1)
      {
         printf("%d + %d =%d \n",i,n-i,n);
         flag=0;
}
}
if(flag==1)
  printf("%d can't be expressed in sum of 2 numbers",n);
    return 0;
}



int checkprime(int m)
{
    int i,prime=1;
    for(i=2;i<=m/2;i++)
    {
        if(m%i==0)
          prime=0;
          break; 
    }
    return prime;
}
