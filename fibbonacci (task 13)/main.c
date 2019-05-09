#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, first = 0, second = 1, next;
for(;;)
  {printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (int i = 0; i < n; i++)
  {
    if (i <= 1)
      next = i;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }}
    return 0;
}
