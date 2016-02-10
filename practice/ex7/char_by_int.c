#include <stdio.h>

int main()
{
  int i = 2;
  char c = 'a';

  printf("%c = %d\n", c, c);
  printf("%c + %d = %d\n", c, i, c + i);
  printf("%c * %d = %d\n", c, i, i * c);

  return 0;
}

