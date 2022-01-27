#include <stdio.h>

void main()
{
  int list[10], duplicate[10];
  int i, j, k, m;
  for (i = 0; i <= 9; i++)
  {
    printf("Input %d element: ", i + 1);
    scanf("%d", &list[i]);
  }

  printf("\nOriginal List: ");
  for (i = 0; i <= 9; i++)
  {
    printf("%d ", list[i]);
  }
  printf("\n");

  m = 0;
  for (i = 0; i <= 8 - m; i++)
    for (j = i + 1; j <= 9 - m; j++)
    {
      if (list[i] == list[j])
      {
        duplicate[m] = list[j];
        for (k = j; k <= 8 - m; k++)
          list[k] = list[k + 1];
        m++;
      }
    }

  printf("Deleted duplicate elements: ");
  for (i = 0; i <= m - 1; i++)
  {
    printf("%d ", duplicate[i]);
  }
  printf("\n");

  printf("New List: ");
  for (i = 0; i <= 9 - m; i++)
  {
    printf("%d ", list[i]);
  }
};