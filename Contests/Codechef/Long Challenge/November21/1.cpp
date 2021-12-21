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
		ll sum=n*1+m*2;
		if(n%2==0)
		{
			if(n==0)
			  {
			  	if(m%2==0)
			  	   cout<<"YES"<<endl;
			  	else
			  	   cout<<"NO"<<endl;
			  }
			  else
			    cout<<"YES"<<endl;
		}
		else
		    cout<<"NO"<<endl;
	}
}
