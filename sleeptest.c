#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
  int sleep_ticks = 100;
  int n = 10;
  while (n > 0) {
    printf(1, "%d: %d\n", n--, uptime());
    sleep(sleep_ticks);
  }
  exit();
}
