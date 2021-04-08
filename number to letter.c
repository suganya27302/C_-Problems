#include<stdio.h>
int main ()
{
  int n, temp, a[10];
  scanf ("%d", &n);
  int i = 0;
  while (n > 0)
    {
      temp = n % 10;
      a[i] = temp;
      n = n / 10;
      i++;
    }
  for (int j = i-1;j>=0;j--){
       {
    if (a[j] == 1)
	printf (" one ");
    else  if (a[j] ==2)
	printf (" two ");
    else  if (a[j] ==3)
	printf (" three ");

    else  if (a[j] ==4)
	printf (" four ");

    else  if (a[j] ==5)
	printf (" five ");

     else if (a[j] ==6)
	printf (" six ");

    else  if (a[j] == 7)
	printf (" seven ");

    else  if (a[j] == 8)
	printf (" eight ");

     else if (a[j] == 9)
	printf (" nine ");
    else  if (a[j] == 0)
	printf (" zero ");
	else
	 printf("please chk the prgm once");



  
       }

    }
  return 0;
}

#---this correct number to letter
243 ---> two four three
