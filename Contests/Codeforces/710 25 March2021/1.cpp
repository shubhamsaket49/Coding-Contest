#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,x,a,b,c;
		cin>>n>>m>>x;
		a=(x-1)/n;
		b=(x-1)%n;
		cout<<(b*m)+(a+1)<<endl;
	}
}
