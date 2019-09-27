#include <stdio.h>

// programa que lê em uma variável através de seu ponteiro
int main() {
  int a, *pa;
  pa = &a;
  scanf("%d",pa);
  printf("%d",a);
  return 0;
}