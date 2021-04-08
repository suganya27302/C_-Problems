#include <stdio.h>
int main ()
{
  int a[10][10], b[10][10], r, c, i, j, r1, c1;
  printf ("enter the matrix1 values:");
  scanf ("%d %d", &r, &c);
  printf ("enter the matrix2 values:");
  scanf ("%d %d", &r1, &c1);

  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("enter the values:[%d][%d]:",i,j);
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
	{
	  printf ("enter the values:[%d][%d]:",i,j);
	  scanf ("%d", &b[i][j]);
	}
    }

  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("%d ", a[i][j]*b[i][j]);
	}
      printf ("\n");
    }



  return 0;
}
