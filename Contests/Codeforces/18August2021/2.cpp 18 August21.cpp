#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll r=abs(b-a);
		ll p=2*r;
		if(a>p || b>p||c>p)
		   cout<<"-1"<<endl;
		else
		{
		   	if(c-r >0 && c-r<p)
		   	    cout<<c-r<<endl;
		   	else
		   	    cout<<c+r<<endl;
		   	
		}
		
	}
	
	
	
}
