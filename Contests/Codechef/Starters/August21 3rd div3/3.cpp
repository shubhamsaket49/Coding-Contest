#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll *arr=new ll[n];
		for(ll i=0;i<n;i++)
		    cin>>arr[i];
		sort(arr,arr+n);
		for(ll i=0;i<k;i++)
		{
			if(arr[i]>=0)
			    break;
			arr[i]*=-1;
		}
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]>0)
			    sum+=arr[i];
		}
		cout<<sum<<endl;
	}
}
