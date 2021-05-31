#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t,count,a,b,flag;
	cin>>t;
	while(t--)
	{
		count=0;
		flag=0;
		ll n,m;
		cin>>n>>m;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				if(((m % a) % b) == ((m % b) %a))
				{
					count++;
					flag=1;
				}
			}
		}
		if(flag==1)
		   cout<<count<<endl;
	}
}
