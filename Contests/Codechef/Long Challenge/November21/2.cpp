#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,count=0,x;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x%2!=0)
			  count++;
		}
		if(count%2!=0)
		     count--;
		cout<<count/2<<endl;
	}
}
