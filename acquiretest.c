#include "types.h"
#include "stat.h"
#include "user.h"

#define N 1000

// int foo = 0;

int main(void) {
  int pid;

  pid = fork();
  if (pid == 0) {
    printf(1, "parent: %d\n", hoge());
    wait();
  } else {
    printf(1, "child: %d\n", hoge());
    exit();
  }
  exit();
}
