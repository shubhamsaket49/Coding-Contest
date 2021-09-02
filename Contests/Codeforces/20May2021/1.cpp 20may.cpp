#include<bits/stdc++.h>
#define ll long long
const long long MOD=1e9+7;
using namespace std;
ll powermod(ll a, ll b)
{
	ll temp=1;
	while(b)
	{
		if(b &1 )temp=(temp*a)%MOD;
		b/=2;
		a=(a*a)%MOD;
	}
	return temp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int k=log2(n);
		cout<<powermod(2,k)-1<<endl;
	}
	
	
	
}
