#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    i=0;
    while(i<strlen(a)){
    if(a[i]>=97 && a[i]<=122)
    {
        a[i]=a[i]-32;
    }
    i++;
    }
    puts(a); 
    return 0;
}
