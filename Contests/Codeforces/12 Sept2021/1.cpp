#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n>>s;
		ll a=ceil((double)n/2);
		n=n-(a-1);
		cout<<s/n<<endl;
	}
}
