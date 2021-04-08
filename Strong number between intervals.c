#include <stdio.h>
int fact(int);
int main()
{
    int n,k,temp,r,sum=0,m,flag=0;
    printf("Enter the intervals:");
    scanf("%d %d",&n,&k);
    printf("The strong number between %d and %d are:",n,k);
    for(int i=n;i<=k;i++){
    m=i;
    while(m>0){
        temp=m%10;
        sum=sum+fact(temp);
        m/=10;
    }
   if(sum==i){
       printf("%d\t",sum);
       flag=1;
   } 
   sum=0;
    }
    if(flag==0)
      printf("NIL");
    
    return 0;
}
int fact(int m){
    int fact=1;
    for(int i=1;i<=m;i++){
        fact=fact*i;
    }
    return fact;
}

 
