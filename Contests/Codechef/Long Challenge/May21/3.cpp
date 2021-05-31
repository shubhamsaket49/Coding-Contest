#include<bits/stdc++.h>
#define ll long long
const long long MOD = 1e9 + 7;

using namespace std;
ll powermod(ll a, ll b){
	ll temp = 1;
	while(b){
		if(b & 1) temp = (temp * a) % MOD;
		b /= 2;
		a = (a*a) % MOD;
	}
	return temp;
}
int main()
{
	ll t,count;
	cin>>t;
	while(t--)
	{
		count=0;
		ll n;
		cin>>n;
	ll count=powermod(2,n-1);
	cout<<count<<endl;
	}
}
