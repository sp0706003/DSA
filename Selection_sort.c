#include <stdio.h>
int main()
{
  printf("Roll NO.:2100320130138");
  int array[100], n, i, j, position, t;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < (n - 1); i++) 
  {
    position = i;

    for (j = i + 1; j < n; j++)
    {
      if (array[position] > array[j])
        position = j;
    }
    if (position != i)
    {
      t = array[i];
      array[i] = array[position];
      array[position] = t;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
    printf("%d  ", array[i]);

  return 0;
}
