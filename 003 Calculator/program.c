#include <stdio.h>
#include <conio.h>

void main()
{
  int operation;
  float A, B;
  printf("Enter 2 values: ");
  scanf("%f %f", &A, &B);
  printf("Choose a Operation \n");
  printf("1 - Addition \n");
  printf("2 - Substraction \n");
  printf("3 - Division \n");
  printf("4 - Multiplication \n");
  scanf("%d", &operation);

  switch (operation)
  {
  case 1:
    printf("Answer is : %f", A + B);
    break;
  case 2:
    printf("Answer is : %f", A - B);
    break;
  case 3:
    printf("Answer is : %f", A / B);
    break;
  case 4:
    printf("Answer is : %f", A * B);
    break;
  }
}