#include <stdio.h>

void main()
{
  int n, r, rev = 0;
  printf("Enter a number\n");
  scanf("%d", &n);
  while (n != 0)
  {
    r = n % 10;
    rev = rev * 10 + r;
    n = n / 10;
  }
  while (rev != 0)
  {
    r = rev % 10;
    rev = rev / 10;
    printf("%d\n", r);
  }
}