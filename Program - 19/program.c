#include <stdio.h>

int factorial(int);

int main()
{
  int terms, sum, i;
  printf("Input number of terms: ");
  scanf("%d", &terms);
  sum = 0;
  for (i = 1; i <= terms; i++){
    sum = sum + factorial(i);
  }
  printf("Sum of Series (S = 1! + 2! ... + %d!): %d", terms, sum);
};

int factorial(int num)
{
  int fact;
  int i;

  fact = 1;
  for (i = 1; i <= num; i++)
    fact = fact * i;

  return fact;
};