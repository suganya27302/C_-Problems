include <stdio.h>
int  pa(int n,int a[]);
int main()
{   int n,ret;
    int a[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ret =pa(n,a);
    if (ret==1)
    printf("palindrome");
    else
    printf("not a palindromde");
    return 0;
}
    
 int pa(int n,int a[]) 
 {
     int b[20],i,j;
    for(i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<n;i++)
    {
          if(a[i]==b[i])
            return 1;
         else
           return 0;
    }
 }
