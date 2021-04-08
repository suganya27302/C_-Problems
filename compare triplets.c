
// find this @hackerank ---> compare triplets

#include<stdio.h>
int main(){
    int a[3],b[3],c[3],i,j=1,k=1;
    c[0]=0,c[1]=0;
    for(i=0;i<3;i++)
         scanf("%d",&a[i]);
    for(i=0;i<3;i++)
         scanf("%d",&b[i]);
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            c[0]=j++;
        }
    else if(a[i]<b[i]){
        c[1]=k++;
    }
    
    }
    for(i=0;i<2;i++)  
    printf("%d ",c[i]);   
    return 0;
}
