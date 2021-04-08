#include<stdio.h>
int main(){
    int n,temp,a[10];
    scanf("%d",&n);
    int i=0;
    while(n>0){
        temp=n%2;
        a[i]=temp;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}
