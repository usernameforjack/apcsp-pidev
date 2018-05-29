#include <stdio.h>

void arrayAdd(int arr[], int s, int n)
{
  for (int i = 0; i < s; i++)
  {
    arr[i] = arr[i] + n;
  }
}

int main()
{
  // create an int array 5 long
  int arr[100];
  
  for (int i = 0; i < 100; i++)
  {
    arr[i] = (i + 1) * (i + 1);
  }
  printf("1st and 3rd vals: %d, %d\n", arr[0], arr[2]);
  
  printf("Or %d, %d\n", *arr, *(arr+2));  

// boom bop badaba boom, pow
  arrayAdd(arr, 100, 3);

  printf("1st and 3rd vals: %d, %d\n", arr[0], arr[2]);
  
  printf("Or %d, %d\n", *arr, *(arr+2));  


}
