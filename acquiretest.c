#include "types.h"
#include "stat.h"
#include "user.h"

#define N 1000

int sleept(int ti, int pid) {
  int n = 10;
  while (n > 0)
  {
    printf(1, "pid%d: %d: %d\n", pid, n--, uptime());
    sleep(ti);
  }
  exit();
}

int main(void) {
  int n = 100, pid;

  pid = fork();
  if (pid == 0) {
    sleept(n, pid);
    wait();
  } else {
    sleept(n, pid);
    exit();
  }
  exit();
}
