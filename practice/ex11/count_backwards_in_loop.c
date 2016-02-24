#include <stdio.h>

int main(int argc, char *argv[])
{
  // instead of counting up from i = 0, 
  // count down from i that equals the
  // length of the array

  int i = argc - 1;
  /* by using i > 0 instead of i > -1, the */ 
  /* program won't print argv[0] (the command */
  /* that executed the program) */
  while (i > 0) {
    printf("arg %d: %s\n", i, argv[i]);
    i--;
  }
}
