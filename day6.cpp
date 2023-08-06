// C++ program to find largest& smallest element
#include <bits/stdc++.h>
using namespace std;

// Function to return K'th smallest element in a given array
int kthSmallest(int arr[], int N, int K)
{
	// Sort the given array
	sort(arr, arr + N);

	// Return k'th element in the sorted array
	return arr[K - 1];
}
int largest(int arr1[], int n, int i)
{
    // Last index return the element
    if (i == n - 1) {
        return arr1[i];
    }
 
    // Find the maximum from rest of the array
    int recMax = largest(arr1, n, i + 1);
 
    // Compare with i-th element and return
    return max(recMax, arr1[i]);
}

// Driver's code
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]), K = 2;
  
  int arr1[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
	// Function call
	cout << "K'th smallest element is "
		<< kthSmallest(arr, N, K);
cout << "\nLargest in given array is "
         << largest(arr1, n, 0);		
	return 0;
}



