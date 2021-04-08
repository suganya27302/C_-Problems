#include<stdio.h>
#include<string.h>
int main(){
   int hour,minute,seconds,c,d;
   char time[20];
   scanf("%02d:%02d:%02d%s",&hour,&minute,&seconds,time);
   printf("%02d:%02d:%02d%s\n",hour,minute,seconds,time);
   if(strcmp(time,"AM")==0 && hour==12){
       hour=hour-12;
   }
   else if(strcmp(time,"PM")==0 && hour!=12){
       hour=hour+12;
   }
   printf("%02d:%02d:%02d",hour,minute,seconds);



return 0;    
}

