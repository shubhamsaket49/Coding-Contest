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
		cin>>n;
		ll *arr= new ll[n];
		ll m=INT_MIN;
		for(ll i=0;i<n;i++)
		  cin>>arr[i];
		for(ll i=0;i<n-1;i++)
		{
			   m=max(m,arr[i+1]*arr[i]);
		}
		cout<<m<<endl;
	}
	
	
}
