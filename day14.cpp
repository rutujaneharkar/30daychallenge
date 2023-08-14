// C++ program to count number of substrings with
// exactly k distinct characters in a given string
#include<bits/stdc++.h>
using namespace std;

// Function to count number of substrings
// with exactly k unique characters
int countkDist(string str, int k)
{
	int n = str.length();

	int res = 0;


	int cnt[26];

	for (int i = 0; i < n; i++)
	{
		int dist_count = 0;

		memset(cnt, 0, sizeof(cnt));

		
		for (int j=i; j<n; j++)
		{
			
			if (cnt[str[j] - 'a'] == 0)
				dist_count++;

			cnt[str[j] - 'a']++;

			
			if (dist_count == k)
				res++;
			if(dist_count > k) break;
		}
	}

	return res;
}

// Driver Program
int main()
{
	string str = "abcbaa";
	int k = 3;
	cout << "Total substrings with exactly "
		<< k <<" distinct characters :"
		<< countkDist(str, k) << endl;
	return 0;
}

