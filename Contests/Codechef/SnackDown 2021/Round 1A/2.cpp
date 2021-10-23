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
		ll p=n*m;
		ll r=(p*(p-1));
		cout<<2*n<<" "<<r<<endl;
		
	}
}

