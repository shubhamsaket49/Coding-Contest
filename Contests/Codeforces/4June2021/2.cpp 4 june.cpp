#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b)
{
	if (a==0)
	   return b;
	return gcd(b%a,a);
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
		ll *arr= new ll[n];
		for(ll i=1;i<=n;i++)
		   cin>>arr[i];
		for(ll i=1;i<n;i++)
		{
			for(ll j=i+1;j<=n;j++)
			{
				if(gcd(arr[i],2*arr[j])>1)
				   count++;
			}
		}
		cout<<count<<endl;
	}
}
