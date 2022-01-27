#include <stdio.h>

float AreaofRectangle(float length,float breadth);

int main()
{
  float length, breadth;
  printf("Enter Length and Breadth: ");
  scanf("%f %f",&length,&breadth);
  printf("Area of the rectangle=%.2f", AreaofRectangle(length,breadth));
}

float AreaofRectangle(float length, float breadth){
  float Area = length * breadth;
  return Area;
} 