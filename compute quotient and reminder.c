#include<stdio.h>
int main()
{
    int dividend,divisor,quo,remin;
    scanf("%d %d",&dividend,&divisor);
    quo=dividend/divisor;
    remin=dividend%divisor;
    printf("%d\n%d",quo,remin);
    return 0;
}
