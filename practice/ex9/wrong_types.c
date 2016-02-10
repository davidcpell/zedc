#include <stdio.h>

int main(int argc, char *argv[])
{
  char word[3] = {'a'};
  word[1] = 'b';
  word[2] = 2;

  printf("%s\n", word);

  int numbers[4] = {1};
  printf("%d\n", numbers[0]);
  numbers[1] = 'a';
  printf("%d\n", numbers[1]);
  printf("%c\n", numbers[1]);

  return 0;
}
