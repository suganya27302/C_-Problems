#include<stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=n-i;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(l=i-1;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    
    return 0;
}
