#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll r=c/a;
		ll s= d/b;
		cout<<r+s<<endl;
	}
}
