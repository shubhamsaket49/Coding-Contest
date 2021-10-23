#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll p=(n-1);
		ll r=((n-m)*m)+(m*(m-1))/2;
		ll s=r/m;
		cout<<s*2<<endl;
	}
}
