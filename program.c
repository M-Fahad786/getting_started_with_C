#include <stdio.h>
int main()
{	
	int arr[5], i;
	int num;
	printf("Enter 5 numbers: \n");

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			arr[i] = num;
		}
		else
		{
			arr[i] = 0;
		}
	}

	printf("\nEven numbers in the array:");

	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0 && arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
		else
		{
			printf("\nthere is no  numbers in the array: ");
		}
		return 0;
	}
}