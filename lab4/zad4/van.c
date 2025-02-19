#include <stdio.h>

extern int a;
extern int b;

void func() {
  printf("a+b = %d", a+b); 
}
