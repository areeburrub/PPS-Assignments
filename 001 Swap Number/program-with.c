#include <stdio.h>
#include <conio.h>

void main()
{
  int A, B, C;
  printf("Input a 2 digit Number");
  scanf("%d %d", &A, &B);
  C = A;
  A = B;
  B = C;
  printf("Swapped digit is %d%d", A, B);
}
