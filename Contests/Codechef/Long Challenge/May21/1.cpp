#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int x,a,b;
		cin>>x>>a>>b;
		ll c= 100-x;
		ll d= c*b;
		ll e= a+d;
		cout<<(e*10)<<endl;
	}
}
