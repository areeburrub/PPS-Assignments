#include <stdio.h>

int main(void)
{
  int ar_1[10], ar_2[10];
  int merge_ar[20];
  int i, j, k;

  printf("***Input first sorted array***\n");
  i = 0;
  while (i <= 9)
  {
    printf("Input %d element: ", i + 1);
    scanf("%d", &ar_1[i]);

    if (i > 0 && ar_1[i] <= ar_1[i - 1])
    {
      printf("Error! %d is smaller than or equal to previous element. Try again.\n", ar_1[i]);
      continue;
    }
    i++;
  }

  printf("\n***Input second sorted array***\n");
  i = 0;
  while (i <= 9)
  {
    printf("Input %d element: ", i + 1);
    scanf("%d", &ar_2[i]);

    if (i > 0 && ar_2[i] <= ar_2[i - 1])
    {
      printf("Error! %d is smaller than or equal to previous element. Try again.\n", ar_2[i]);
      continue;
    }
    i++;
  }

  printf("\nFirst Array: ");
  for (i = 0; i <= 9; i++)
    printf("%d ", ar_1[i]);
  printf("\n");

  printf("Second Array: ");
  for (i = 0; i <= 9; i++)
    printf("%d ", ar_2[i]);
  printf("\n");

  i = 0;
  j = 0;
  k = 0;
  while (i <= 9 && j <= 9)
  {
    if (ar_1[i] <= ar_2[j])
    {
      if (k == 0 || merge_ar[k - 1] < ar_1[i])
      {
        merge_ar[k] = ar_1[i];
        k++;
      }
      i++;
    }
    else
    {
      if (k == 0 || merge_ar[k - 1] < ar_2[j])
      {
        merge_ar[k] = ar_2[j];
        k++;
      }
      j++;
    }
  }
  if (i < j)
  {
    while (i <= 9)
    {
      merge_ar[k] = ar_1[i];
      i++;
      k++;
    }
  }
  else
  {
    while (j <= 9)
    {
      merge_ar[k] = ar_2[j];
      j++;
      k++;
    }
  }

  printf("Merge Array: ");
  for (i = 0; i <= k - 1; i++)
    printf("%d ", merge_ar[i]);

  return 0;
};