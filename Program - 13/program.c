#include <stdio.h>

void main()
{
  int i, j, k, l, rows;
  rows = 3;
  for (i = rows; i >= 1; i--)
  {
    for (j = i; j >= 1; j--){printf("%d", j);}
    printf("\n");
  }

  for (k = 1; k <= rows; ++k)
  {
    for (l = 1; l <= k; ++l)
    {printf("* ");}
    printf("\n");
  }
}