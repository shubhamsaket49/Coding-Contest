#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,flag=0;
		cin>>n;
		ll *arr=new ll[n];
		ll *brr=new ll[n-1];
		for(ll i=0;i<n;i++)
		    cin>>arr[i];
		for(ll i=0;i<n-1;i++)
		    cin>>brr[i];
		sort(arr,arr+n);
		sort(brr,brr+n-1);
		ll c=brr[n-2]-arr[n-1];
		ll d=brr[n-2]-arr[n-2];
		if(c<=0)
		   cout<<d<<endl;
		else if(d<=0)
		   cout<<c<<endl;
		else
		{
		map<int,int>m1;
		map<int,int>m2;
		for(int i=0;i<n;i++)
		{
			arr[i]=arr[i]+c;
			m1[(arr[i])]++;
		}
		
		for(int i=0;i<n-1;i++)
		{
			if(m1.find(brr[i])==m1.end())
			    {
			    	flag=1;
			    	break;
				}
		}
		
		if(flag==0)
		   cout<<c<<endl;
		else
		   cout<<d<<endl;
	}
}
	
	
}
