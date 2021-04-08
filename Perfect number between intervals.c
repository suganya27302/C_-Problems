#include<stdio.h>
int main(){
    int n,m,i,j,sum=0;
    printf("Enter the intervals:");
    scanf("%d %d",&n,&m);
    printf("The perfect number between %d and %d are:",n,m);
    for(j=n;j<=m;j++){
    for(i=1;i<=j/2;i++){
       if(j%i==0){
           sum=sum+i;
       } 
    }
    if(sum==j){
        printf("%d\t",sum);
    }
    sum=0;
    }
    return 0;
}
 
