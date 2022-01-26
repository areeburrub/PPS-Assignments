#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  float A, B, C, Root1, Root2;
  printf("input value of A, B and C of a quadratic equation");
  scanf(" %f %f %f", &A, &B, &C);

  Root1 = (-B + sqrt(pow(B, 2) - (4 * A * C))) / 2 * A;
  Root2 = (-B - sqrt(pow(B, 2) - (4 * A * C))) / 2 * A;

  printf("First Root is : %f \n Second Root is : %f", Root1, Root2);
  getch();
}
