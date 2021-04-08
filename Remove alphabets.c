// code blooded - coding ninjas question

#include <stdio.h>
#include<string.h>
int main(){
	// Read input as specified in the question.
	// Print output as specified in the question.
	//Write your code here
    int x,i,j=0,k=0;
    char s[1000000],a[1000000],b[1000000];
    scanf("%s",s);
    x=strlen(s);
    i=0;
    while(x!=0){
     if(s[i]=='C'||s[i]=='A'||s[i]=='M'||s[i]=='B'||s[i]=='R'||s[i]=='I'||s[i]=='D'||s[i]=='G'||s[i]=='E')
     {
         b[j++]=s[i];
     }  
     else if(s[i]>='A'&& s[i]<='Z'){
         a[k++]=s[i];
     }  
    i++;
    x--;
        
}
    for(j=0;j<k;j++){
        printf("%c",a[j]);
    }  
    return 0;
}
