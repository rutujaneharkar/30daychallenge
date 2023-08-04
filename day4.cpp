// C++ program to Rearrange positive and negative
// numbers in a array
#include <bits/stdc++.h>
using namespace std;

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
}

void rotateSubArray(int arr[], int l, int r) {
int temp = arr[r];
for (int j = r; j > l - 1; j--) {
arr[j] = arr[j - 1];
}
arr[l] = temp;
}

void moveNegative(int arr[], int n)
{

	int last_negative_index = -1;
	
	for (int i = 0; i < n; i++) {
	if (arr[i] < 0) {
		last_negative_index += 1;
		int temp = arr[i];
		arr[i] = arr[last_negative_index];
		arr[last_negative_index] = temp;
	
		// Done to manage order too
		if (i - last_negative_index >= 2)
		rotateSubArray(arr, last_negative_index + 1, i);
	}
}
}

// Driver Code
int main()
{
	int arr[] = { 5,-2,9,7,-3,-4,6,-1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	moveNegative(arr, n);
	printArray(arr, n);

	return 0;
}

// This code is contributed by Aarti_Rathi

