#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(int arr[], int len, int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return 1; // Number already exists in the array
		}
	}
	return 0; // Number does not exist in the array
}


int main()
{
	srand(time(NULL)); // Seed the random number generator
	int arr[10], sum = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len;)
	{
		int num = (rand() % 100 + 1); // Generate a random number between 1 and 100
		int flag = contains(arr, len, num); // Check if the number already exists in the array
		if (!flag)
		{
			arr[i] = num; // Assign the random number to the array
			i++;
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]); // Print the array elements
		sum += arr[i]; // Calculate the sum of the array elements
	}
	int avg = sum / len; // Calculate the average
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < avg)
		{
			count++; // Count the numbers greater than the average
		}
	}
	printf("avg=%d\n", avg);
	printf("sum=%d\n", sum);
	printf("count=%d\n", count);
	return 0;
}
