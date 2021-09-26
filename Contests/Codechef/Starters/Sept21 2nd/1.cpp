#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n==1)
		   cout<<"3"<<endl;
		else if(n==2)
		  cout<<"21"<<endl;
		else
		{
			cout<<"1";
			for(int i=1;i<=n-2;i++)
			{
			   cout<<"0";
		}
			cout<<"5"<<endl;
		}
	}
}
