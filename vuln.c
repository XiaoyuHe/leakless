#include <stdlib.h>
#include <stdio.h>

char put_me_in_bss[1024] = {0};

int play_with_stack(int i) {
  int *local = alloca(10);
  local[0] = 123;
  return local[i];
}

void add(int *a, int b) {
  *a += b;
}

void mem_to_mem(int *dst, int *src) {
  *dst = *src;
}

void writemem(void **in, void *val) {
  *in = val;
}

int do_read() {
  char buffer[100];
  read(0, buffer, 10000);
}

int main() {
  do_read();
}
