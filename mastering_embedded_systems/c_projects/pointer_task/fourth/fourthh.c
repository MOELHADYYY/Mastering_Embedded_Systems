#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, i;
  

  // Get the number of elements from the user.
  printf("Enter the number of elements: ");
  scanf("%d", &x);

int arr[x];
  // Get the elements from the user.
  for (i = 0; i < x; i++) {
    printf("Enter element %d\n: ", i + 1);
    scanf("%d", &arr[i]);
  }


  // Print the elements.
  for (i = 0; i < x; i++) {
    printf("%d \n", arr[i]);
  }
  int *ptr;
  ptr=&arr[x-1];
  for(i=x-1;i>=0;i--)
  {
    printf("the reversed numbers are:%d\n",*ptr);
    *ptr--;
  }

  return 0;
}
