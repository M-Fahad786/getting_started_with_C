#include <stdio.h>
#include <conio.h>

int main()
{
  // Create two variables in an array and store any five numbers. Take user input to find a specific number and display how many times it is repeated in the array using loops. using C
  int arr[5] = {20, 30, 40, 50, 60};
  int i, userInput, count = 0;
  printf("Enter the number you want to search: ");
  scanf("%d", &userInput);
  for (i = 0; i < 5; i++)
  {
    if (arr[i] == userInput)
    {
      count++;
    }
  }
  printf("%d is repeated %d times in this array", userInput, count);
  return 0;
}