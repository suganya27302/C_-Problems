#include<stdio.h>
int main(){
    int n,i,j,k,l;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=n-i;k>=1;k--){
            printf(" ");
        }
            for(j=1;j<=i;j++){
                printf("*");
            }
          for(l=i;l>1;l--){
              printf("*");
          }
        
          printf("\n");
    }
    
    return 0;
}
