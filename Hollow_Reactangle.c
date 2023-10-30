//                                                    HOLLOW RECTANGLE

#include <stdio.h>
#include <math.h>
void main()
{
  int i, j, k, m, n, sp;
  printf("enter the no. of rows and coloumn respectively\n");
  scanf("%d%d", &m, &n);
  for (i = 1; i <= m; i++)
  {
    printf("\n");
    printf("*");
    if (i == 1 || i == m)
    {
      for (k = 1; k <= n - 1; k++)
        printf("%2c", '*');
    }
    else
    {
      for (sp = 1; sp <= (2 * n - 3); sp++)
        printf(" ");
      printf("*");
    }
  }
}