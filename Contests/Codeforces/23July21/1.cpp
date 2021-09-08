#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,r;
		cin>>n;
		if(n%3==1)
		{
			p=n/3;
			p++;
			r=n/3;
		}
		else if(n%3==2)
		{
			p=n/3;
			r=n/3;
			r++;
		}
		else
		{
			p=n/3;
			r=n/3;
		}
		  cout<<p<<" "<<r<<endl;
	}
}
