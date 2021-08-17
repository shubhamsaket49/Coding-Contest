#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,k;
		cin>>n>>p>>k;
		ll count=0;
		ll d=p%k;
	    d--;
	    
	    ll s=(((n-1)/k)*k);
	    s=n-1-s;
	    if(d>s)
	       count+=(s+1)*((n-1)/k+1)+(d-s)*((n-1)/k);
	    else
	      count+=((n-1)/k+1)*(d+1);
		for(int i=d+1;i<n;i+=k)
		{
			count++;
			if(i==p)
			{
				cout<<count<<endl;
				break;
			}
		}
	}
	
	
}
