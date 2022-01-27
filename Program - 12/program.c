
#include <stdio.h>
#include <math.h>

void main()
{
  int i, j, ArmStrong, temp;
  printf("Armstrong numbers between 100 and 500: ");
  for (i = 100; i <= 500; i++)
  {
    ArmStrong = 0;
    for (temp = i; temp != 0; temp /= 10)
      ArmStrong = ArmStrong + pow(temp % 10, 3);
    if (i == ArmStrong)
      printf("%d ", i);
  }
};F