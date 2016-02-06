#include <stdio.h>

int main()
{
  int a = 34;
  double b = 100;
  float c = 3.1415926912384930;

  printf("%%d (signed decimal integer): %d\n", a);
  printf("%%e (scientific notion): %e\n", b);
  printf("%%f (decimal floating point): %f\n", c);
}
