/*Given an array of N integers, and an integer K, the task is to find the number of pairs of integers in the array whose sum is equal to K.*/
#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'K'
int getPairsCount(int arr[], int n, int K)
{
	// Initialize result
	int count = 0;

	// Consider all possible pairs and check their sums
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == K)
				count++;

	return count;
}

// Driver function to test the above function
int main()
{
	int arr[] = { 1, 5, 7, -1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int K = 6;
	cout << "Count of pairs is "
		// Function Call
		<< getPairsCount(arr, n, K);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)

