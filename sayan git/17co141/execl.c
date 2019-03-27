#include <stdio.h>
#include <unistd.h>

int main() {
  printf("\nExecuting using execl");
  execl("./alarm", "./alarm", NULL);
  printf("\nEnd");
  return 0;
}