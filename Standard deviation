#include <stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,mean=0,b[1000];
    float nm=0.0;
    printf("Enter the total count: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ 
        scanf("%d",&a[i]);
        mean=mean+a[i];
    }
    mean=mean/n;
    printf("Mean:%d\n",mean);
    for(i=0;i<n;i++){
        b[i]=mean-a[i];
        nm=nm+b[i]*b[i];
    }
    printf("Squared value:%f\n",nm);
    nm=nm/(n-1);
    printf("variance:%0.2f\n",nm);
    nm=sqrt(nm);
    printf("Standard deviation:%0.2f",nm);


    

    return 0;
}
