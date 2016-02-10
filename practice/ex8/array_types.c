#include <stdio.h>

int main()
{
  int ages[] = {1, 3, 27, 29, 60};

  printf("The first age is %d.\n\n", ages[0]);

  puts("Let's print out all the ages without line breaks:");
  for (int i = 0; i < sizeof(ages) / sizeof(int); ++i)
    printf("%d ", ages[i]);
  printf("\n\n");

  puts("What happens if we assign a char to an array of type 'int'?");
  ages[0] = 'a';
  printf("First age is now %d ('a').\n\n", ages[0]);

  puts("So it works with single quotes, but what about double?");
  // This causes a compiler warning and wonky output.
  ages[0] = "a";
  printf("First age is now %d (\"a\" and sequence %%d).\n", ages[0]);
  printf("With \"a\" and sequence %%c we get %c.\n", ages[0]);
}
