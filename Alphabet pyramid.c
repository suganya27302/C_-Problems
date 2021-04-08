#include<stdio.h>
int main(){
    int n,i,j,k,l;
    char m='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=n-i;k>=1;k--){
            printf(" ");
        }
         m='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",m++);
            
        }
        m--;
        for(l=i-1;l>=1;l--){
            printf("%c",--m);
        }
        printf("\n");
    }
    
    return 0;
}

 
