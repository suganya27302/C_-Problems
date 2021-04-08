#include <stdio.h>

int main()
{   int n,i,j,k,l;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("*");
        }
        for(l=i;l>1;l--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
