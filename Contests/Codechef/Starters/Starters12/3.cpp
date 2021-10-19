#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		if (2*x<=y) 
		{
			cout<<(m+n-2)*x << "\n";
		}
		else {
			
			if (n > m) 
			{
				swap(n, m);
			}
			int sum = (n - 1) * y;
			int rem = m - n;
			if (x < y) 
			{
				sum += rem * x;
			}
			else {
				if (rem%2==0) 
				{
					sum+= rem*y;
				}
				else 
				{
					sum += (rem / 2)*2*y+x;
				}
			}
			cout << sum << "\n";
		}
	}
}
