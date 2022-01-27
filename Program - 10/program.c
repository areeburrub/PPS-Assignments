#include <stdio.h>
#include <math.h>

void main(){
  int n, x, i, j;
  double fact, sum;
  printf("Input number of terms: ");
  scanf("%d", &n);
  printf("Input x: ");
  scanf("%d", &x);
  sum = 1;
  fact = 1;
  for (i = 1; i <= n; i++)
  {
    fact = 1;
    for (j = 1; j <= i; j++)
      fact = fact * j;
    sum = sum + pow(-x, i) / fact;
  }
  printf("Sum of Series: %.2lf", sum);

};