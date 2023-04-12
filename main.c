#include <stdio.h>
int main()
{
  int start_value, end_value;
  printf("Enter Starting Value: ");
  scanf("%d", &start_value);
  printf("Enter Ending Value: ");
  scanf("%d", &end_value);
  for (int i = start_value; i <= end_value; i++)
  {
    printf("%d ", i);
  }
  return 0;
}
