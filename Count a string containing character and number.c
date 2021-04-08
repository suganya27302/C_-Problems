#include<stdio.h>
#include<string.h>
int main(){
    
    int i,x,len=0,len1=0,len2=0,len3=0,len4=0;
    char a[100];
    fgets(a,sizeof a,stdin);
    x=strlen(a);
    for(i=0;i<x;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
           len++; 
        }
        else if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z' ){
            len1++;
        }
        else if(a[i]>='0' && a[i]<='9'){
            len2++;
        }
        else if(a[i]==32)
        {
            len3++;
        }
        else
          len4++;
    }
    printf("Vowels:%d\nConsonant:%d\nDigits:%d\nWhitespaces:%d\nSpecial character:%d",len,len1,len2,len3,len4-1);
    return 0;
}
