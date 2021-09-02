#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		ll k,b=0;
		cin>>n>>k;
		ll *arr= new ll[n+1];
		for(ll i=0;i<n;i++)
		   cin>>arr[i];
		ll c=INT_MIN;
		ll start=max(0, n-201 );
		for(ll i=start;i<n;i++)
		{
			for(ll j=i+1;j<n;j++)
			{
				b= (i+1)*(j+1)-k*(arr[i] | arr[j]);
				c=max(c,b);
			}
		}
		
		cout<<c<<endl;
		
		
	}
	
	
	
}
