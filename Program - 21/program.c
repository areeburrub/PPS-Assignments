// Recursive C program to find sum of digits
// of a number
#include <stdio.h>

// Function to check sum of digit using recursion
int sum_of_digit(int n)
{
  if (n == 0)
    return 0;
  return (n % 10 + sum_of_digit(n / 10));
}

// Driven Program to check above
int main()
{
  int num;
  printf("Enter a 5 digit Number: ");
  scanf("%d",&num);
  int result = sum_of_digit(num);
  printf("Sum of digits in %d is %d\n", num, result);
  return 0;
}