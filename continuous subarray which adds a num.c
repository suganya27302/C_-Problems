#include<stdio.h>
int main(){
    int n,s,i,temp=0;
    scanf("%d",&n);
    scanf("%d",&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       for(int j=i;j<n;j++){                  //
           temp=temp+a[j];                    //
           if(temp==s){                       //this loop is breaked
               printf("%d %d\n",i+1,j+1);
               i=n,j=n;
               break;                         //
           }
        }
        temp=0;
    }
    return 0;
}

