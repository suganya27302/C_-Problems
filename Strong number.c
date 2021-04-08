#include <stdio.h>
int fact(int);
int main()
{
    int n,temp,r,sum=0,m;
    scanf("%d",&n);
    m=n;
    while(n>0){
        temp=n%10;
        sum=sum+fact(temp);
        n/=10;
    }
   if(sum==m){
       printf("%d  is a strong number",sum);
   } 
   else
    printf("%d is not a strong number",sum);

    return 0;
}
int fact(int m){
    int fact=1;
    for(int i=1;i<=m;i++){
        fact=fact*i;
    }
    return fact;
}
