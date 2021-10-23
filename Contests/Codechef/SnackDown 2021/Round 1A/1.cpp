#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,count=0;
		cin>>n>>m;
		while(n!=m)
		{
			if(n<m)
			{
				n=n+2;
				count++;
			}
			if(n>m)
			{
				n=n-1;
				count++;
			}
		}
		cout<<count<<endl;
	}
}
