#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
//comment
=======

void init_rand(void)
{
  srand(time(NULL));
}

>>>>>>> 434159cdcfdebcbaddbeb14a4707b4a0c4f7f6f9
int random_int(int max)
{
  return rand() % max;
}

int main(int argc, char *argv[])
{
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <number>\n", argv[0]);
    return EXIT_FAILURE;
  }

  int max = atoi(argv[1]);

  srand(time(NULL));
  int result = random_int(max);
  printf("%d\n", result);

  return EXIT_SUCCESS;
}
