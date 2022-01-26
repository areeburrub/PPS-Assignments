#include <stdio.h>
#include <math.h>
void main()
{
  int a, x, b, n, y;
  printf("Enter the value of a,x,b,n\n");
  scanf("%d%d%d%d", &a, &x, &b, &n);
  if (n == 1)
    y = (a * x) % b;
  if (n == 2)
    y = (a * x * x) + (b * b);
  if (n == 3)
    y = a - b * x;
  if (n == 4)
    y = a + (x / b);
  printf("Value of the y is: %d", y);
}