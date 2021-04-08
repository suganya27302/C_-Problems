// code blooded -- coding ninjas question

#include <stdio.h>
int main(){
	// Read input as specified in the question.
	// Print output as specified in the question.
	//Write your code here
    int r,c,a,b,i,j,k,l=0;
    scanf("%d %d",&r,&c);
    scanf("%d %d",&a,&b);
    r=r*a;
    c=c*b;
    printf("%d %d %d\n",r,c,b);
    for(i=0;i<r;i++){
        for(j=0;j<c/b;j++){
            if(l<c){
            for(k=0;k<b;k++){
                printf("X");
            }
            l+=b;
            }
            if(l<c){
            for(k=0;k<b;k++){
                printf(".");
            } 
            l+=b;
            }
        }
        printf("\n");
        l=0;
    }
return 0;
}
