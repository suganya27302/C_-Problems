#include<stdio.h>
int main(){
    int n,temp=0,r=1,sum=1,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",sum);
            sum=sum+temp;
            temp=r;
             r=sum;

        }
        temp=0;
        sum=1;
        r=1;
        printf("\n");
    }
    return 0;
}
 
