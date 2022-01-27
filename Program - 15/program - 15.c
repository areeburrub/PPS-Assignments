#include <stdio.h>

int sum_of_odd_digits(int n)
{

  int r, sum = 0;

  // reading each digit of n
  while (n > 0)
  {
    r = n % 10;
    n = n / 10;
    if (r % 2 == 1)
      sum = sum + r;
  }

  return sum;
}

int main()
{
  int n;
  printf("Enter a Number: ");
  scanf("%d", &n);
  printf("Sum of Odd Digits: %d", sum_of_odd_digits(n));
}