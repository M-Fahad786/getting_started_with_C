#include <stdio.h>
#include <conio.h>
int main()
{
  int arr1[5], arr2[5]; // create two variables arr1 and arr2, each with 5 integers

  // take user input for arr1
  printf("Enter 5 numbers for arr1: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr1[i]);
  }

  // take user input for arr2
  printf("Enter 5 numbers for arr2: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr2[i]);
  }

  // print the values in arr1
  printf("Values in arr1: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  // print the values in arr2
  printf("Values in arr2: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  // search for a number in arr1
  int num, found = 0; // create variables to store the number and found status
  printf("Enter a number to search in arr1: ");
  scanf("%d", &num);

  for (int i = 0; i < 5; i++)
  {
    if (arr1[i] == num)
    {            // check if the current element in arr1 is equal to the number
      found = 1; // set found status to true
      break;     // exit the loop early
    }
  }

  if (found)
  {
    printf("%d was found in arr1.\n", num);
  }
  else
  {
    printf("%d was not found in arr1.\n", num);
  }

  // search for a number in arr2
  found = 0; // reset found status for arr2
  printf("Enter a number to search in arr2: ");
  scanf("%d", &num);

  for (int i = 0; i < 5; i++)
  {
    if (arr2[i] == num)
    {            // check if the current element in arr2 is equal to the number
      found = 1; // set found status to true
      break;     // exit the loop early
    }
  }

  if (found)
  {
    printf("%d was found in arr2.\n", num);
  }
  else
  {
    printf("%d was not found in arr2.\n", num);
  }

  return 0;
}
