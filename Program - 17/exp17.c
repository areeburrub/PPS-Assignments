#include <stdio.h>
void Facto(int n);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Facto(num);
}

void Facto (int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    printf("%d! = %d\n", n, f);
}