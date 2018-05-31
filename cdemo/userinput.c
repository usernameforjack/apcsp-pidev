#include <stdio.h>


float areaOfCircle(float radius)
{
  return 3.14 * radius * radius;
}
int main()
{

  char input[256];
  float low;
  float high;
  
  printf("What is the bottom range of radi?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%f", &low);

  printf("What is the upper range of radi?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%f", &high);

   for(low; low <= high; low++)
    {
      printf("the area of a circle with a radius of %f is equal to %f\n", low, areaOfCircle(low));
    }

  printf("%f %f\n", low, high);  
}
