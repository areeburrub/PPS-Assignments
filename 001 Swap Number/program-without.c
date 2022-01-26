#include <stdio.h>
#include <conio.h>

void main()
{
  int A, B;
  printf("Input a 2 digit Number");
  scanf("%d %d", &A, &B);
  A = A - B;
  B = A + B;
  A = B - A;
  printf("Swapped digit is %d%d", A, B);
}
