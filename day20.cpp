#include<bits/stdc++.h>
using namespace std;

int removeConsecutiveSame(vector <string > v)
{
	int n = v.size();
	for (int i=0; i<n-1; )
	{
	
		if (v[i].compare(v[i+1]) == 0)
		{
		
			v.erase(v.begin()+i);
			v.erase(v.begin()+i);
			if (i > 0)
				i--;
			n = n-2;
		}

		else
			i++;
	}
	return v.size();
}

// Driver code
int main()
{
	vector<string> v = { "tom", "jerry", "jerry", "tom"};
	cout << removeConsecutiveSame(v);
	return 0;
}

