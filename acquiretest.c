#include "types.h"
#include "stat.h"
#include "user.h"
#include "spinlock.h"

#define N 1000

int hoge = 10;
struct spinlock *hogelock;

int sleept(int pid) {
  int n = 10;
  while (n > 0)
  {
    acquire(hogelock);
    printf(1, "pid%d: %d: %d\n", pid, n--, hoge++);
    release(hogelock);

  }
  exit();
}

int main(void) {
  initlock(hogelock, "hoge");
  int pid;

  pid = fork();
  if (pid == 0) {
    sleept(pid);
    wait();
  } else {
    sleept(pid);
    exit();
  }
  exit();
}
