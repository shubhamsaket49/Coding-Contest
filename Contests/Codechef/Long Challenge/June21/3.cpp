#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll p=powermod(2,n)-1;
        cout<<powermod(p,m)<<endl;
    }
    
    
    
}
