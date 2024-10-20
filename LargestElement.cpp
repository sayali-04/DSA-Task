/* Task-1: Find largest number from an array*/
#include <iostream>
using namespace std;

// Function to find the maximum of array
int largest(int arr[], int n)
{
	int i;
	int max = arr[0];
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

// Driver Code
int main()
{
	int arr[] = {5, 5, 5, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Largest in given array is: " << largest(arr, n);
	return 0;
}
/*output: Largest in given array is :5*/
