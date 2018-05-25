#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  int d = a;
  a = c;
  c = d;
  printf("C is now %d and A is now %d\n", c, a);
}





