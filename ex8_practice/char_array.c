#include <stdio.h>

int main()
{
  char city[] = "Durham";
  char other_city[] = "Raleigh";

  printf("The city is: %s\n", city);
  printf("It contains %ld characters (7th being the nul byte).\n\n", sizeof(city));

  puts("Let's change the first letter to B.");
  city[0] = 'B';
  printf("Now the city's name is: %s.\n\n", city);

  printf("The other city is %s.\n", other_city);
  printf("We can use it to modify %s's name.\n", city);

  int i;
  char previous[sizeof(city)];
  for (i = 0; i < sizeof(city) - 1; ++i)
    previous[i] = city[i];

  city[0] = other_city[0];
  printf("%s's name is now %s!\n", previous, city);
}
