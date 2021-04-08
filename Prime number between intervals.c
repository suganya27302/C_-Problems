#include<stdio.h>
int
main ()
{
  int n, m, j, count = 0;
  printf ("enter the intervals:");
  scanf ("%d %d", &n, &m);
  for (j = n; j <=m; j++)
    {
      count = 0;
      for (int i = 2; i <= j / 2; i++)
	{
	  if (j % i == 0)
	    {
	      count = 1;
	      break;
	    }

	}

      if (count == 0)
	{
	  printf ("%d", j);
	}
    }
  return 0;
}
