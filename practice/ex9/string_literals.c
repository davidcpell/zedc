#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char *sentence = "This is a sentence.";
  char *long_sentence = "This is an even longer sentence than before.";

  printf("%s\n", sentence);
  printf("Size of sentence: %ld\n", sizeof(sentence));
  printf("Length of sentence (using strlen()): %ld\n", strlen(sentence));
  puts("Can't use sizeof() in a for loop to print this:");
  for (int i = 0; i < (sizeof(sentence) / sizeof(char)); ++i) 
    printf("%c", sentence[i]);
  printf("\n\n");

  printf("Size of long_sentence: %ld\n", sizeof(long_sentence));
  printf("Length of long_sentence (using strlen()): %ld\n", strlen(long_sentence));
  puts("Let's use sizeof() in a for loop to print this:");
  for (int i = 0; i < (strlen(long_sentence)); ++i) 
    printf("%c", long_sentence[i]);
  printf("\n");

  /* for some reason this doesn't work */
  /* it results in a "bus error" */
  /* puts("\nLet's change a letter:"); */
  /* sentence[0] = 's'; */
  /* printf("%s\n", sentence); */

  /* Initializing the array this way avoids */
  /* the above error */
  /* char month[] = "July"; */
  /* printf("%s\n", month); */
  /* month[0] = 'j'; */
  /* printf("%s\n", month); */
  
  return 0;
}
