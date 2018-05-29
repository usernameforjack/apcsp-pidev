#include<stdio.h>

int main()
{
  int a = 545;
  char b = 28;
  float c = 78901;
  double d = 1234567890;
  unsigned int e = 123;
  unsigned char f = 123;
  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\nchar b value %c and size %c bytes.\nfloat c value %f and size %f bytes.\ndouble d value %f and size %f bytes.\nunsigned int e value %d and size %d bytes.\nunsigned char f value %c and size %c bytes.\n", a, sizeof(a), b, sizeof(b), c, sizeof(c), d, sizeof(d), e, sizeof(e), f, sizeof(f));
}

