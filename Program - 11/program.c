#include <stdio.h>

void main()
{
  int i, j;
  printf("Prime numbers between 1 and 300: ");
  for (i = 2; i <= 300; i++)
  {
    for (j = 2; j < i; j++)
    {
      if (i % j == 0)
        break;
    }
    if (j == i)
      printf("%d, ", j);
  }
};