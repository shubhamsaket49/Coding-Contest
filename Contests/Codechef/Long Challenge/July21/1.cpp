#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll d,x,y,z;
		cin>>d>>x>>y>>z;
		ll a=x*7;
		ll b=y*d+z*(7-d);
		cout<<max(a,b)<<endl;
		
		
	}
	
	
}
