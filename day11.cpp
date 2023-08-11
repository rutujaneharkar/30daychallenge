// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to reverse the given string
string reverseString(string str)
{

	// Reverse str using inbuilt function
	reverse(str.begin(), str.end());

	str.insert(str.end(), ' ');

	int n = str.length();

	int j = 0;

	for (int i = 0; i < n; i++) {

		if (str[i] == ' ') {
			reverse(str.begin() + j, str.begin() + i);
			j = i + 1;
		}
	}


	str.pop_back();

	return str;
}

// Driver code
int main()
{
	string str = "I like this code";
	string rev = reverseString(str);

	cout << rev;
	return 0;
}

