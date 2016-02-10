#include <stdio.h>

int main()
{
  int n = 100;

  printf("%3d\n", n);
  printf("%6d\n", n);
  printf("%-6d\n", n);
  printf("%*d\n", 10, n);
}
