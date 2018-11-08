#include "types.h"
#include "stat.h"
#include "user.h"

#define N 1000

int foo = 0;

int main(void) {
  int pid;

  pid = fork();
  if (pid == 0) {
    printf(1, "parent: %d", hoge(foo));
    wait();
  } else {
    printf(1, "parent: %d", hoge(foo));
    exit();
  }
  exit();
}
