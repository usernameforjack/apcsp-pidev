#include <stdio.h>

float areaOfCircle(float radius)
{
  return 3.14 * radius * radius;
}
int main()
{
  for(float i = 3.5; i <=12.5; i++)
    {
      printf("the area of a circle with a radius of %f is equal to %f\n", i, areaOfCircle(i));
    }
}
