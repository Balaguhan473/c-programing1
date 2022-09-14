#include <stdio.h>
int main() {
  int *ptr;
  int x = 5;
  
  ;ptr = &x;
  
  printf("%d", *ptr);
  printf("\n");

  printf("%x", &ptr);
  return 0;
}
