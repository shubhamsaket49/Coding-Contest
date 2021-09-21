#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c=0,sum=0;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<n-1;i++)
		{
		if(str[i]!='0')
		      c++;
		}
	     for(ll i=0;i<n;i++)
	     {
	     	sum+=(str[i]-'0');
		 }
		 cout<<sum+c<<endl;
	}
}
