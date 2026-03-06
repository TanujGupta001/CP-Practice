#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.length();
		int zero = 0,ones = 0; 
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				zero++;
			else
				ones++;
		}
		int t = 0; 
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0' && ones > 0)
			{
				ones--;
				t++; 
			}
			else if (s[i] == '1' && zero > 0)
			{
				zero--; 
				t++; 
			}
			else
			{
				break;
			}
		}
		cout << n -t << endl;
	}
	return 0;
}