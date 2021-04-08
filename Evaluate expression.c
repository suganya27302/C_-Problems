// code blooded - coding ninjas question

#include <stdio.h>
#include<math.h>
int main(){
	// Read input as specified in the question.
	// Print output as specified in the question.
	//Write your code here
    int n,i,a[10000],temp,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    while(n!=0){
        temp=a[i]%10;
        a[i]/=10;
        sum=sum+pow(a[i],temp);
        i++;
        n--;
    }
    printf("%d",sum);
    return 0;
}
