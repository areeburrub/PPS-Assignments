#include <stdio.h>

void Fibo(int n);

void main()
{
    int number;
    printf("Enter the number of elements:");
    scanf("%d", &number);
    Fibo(number);
}

void Fibo(int number){
    int n1 = 0, n2 = 1, n3, i;
    printf("\n %d %d", n1, n2);
    for (i = 2; i < number; ++i)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}