#include<stdio.h>
int main()
{
    char a[20],b[20];
    int length=0,flag=1,i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    printf("%d\n",length);
    for(i=length-1;i>=0;i--)
    {
        b[length-1-i]=a[i];
        printf("%c",b[length-1-i]);
    }
    for(i=0;i<length;i++)
    {
        printf("\n");
        if(a[i]!=b[i]) 
        {
            flag=0;
            printf("%c",a[i]);
            printf("ss");
        }
    }
    if(flag==1)
    printf("palindrome");
    else
    printf("not a palindrome");
    return 0;
}
