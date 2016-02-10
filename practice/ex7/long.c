#include <stdio.h>

int main()
{
  int one_l = 1L;
  int ten_twenty_four_l = 1024L;
  long uod = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L;

  printf("1L = %d\n", one_l);
  printf("1024L = %d\n", ten_twenty_four_l);
  printf("%ld\n", uod);

  return 0;
}
