/* srand example */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{
  srand (time(NULL));
  
	srand (2);
  printf ("First number: %d\n", rand()%100);
  printf ("Random number: %d\n", rand()%100);
  // srand (2);
  printf ("Again the first number: %d\n", rand()%100);


	printf("%ld\n", time(NULL));
  return 0;
}