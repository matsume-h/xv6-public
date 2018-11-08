#include "types.h"
#include "stat.h"
#include "user.h"

#define N 1000

int foo = 0;

int main(void) {
  int pid;
  int i, j;

  pid = fork();
  if (pid == 0) {
    for (i = 0; i < N; i++)
    {
      foo = hoge(foo);
    }
    printf(1, "parent: %d", foo);
    wait();
  } else {
    for (j = 0; j < N; j++)
    {
      foo = hoge(foo);
    }
    printf(1, "parent: %d", foo);
    exit();
  }
  exit();
}
