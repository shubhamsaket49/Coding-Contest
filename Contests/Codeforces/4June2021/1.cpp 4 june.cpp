#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	
	int t,p,q;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll p=max(a,b);
		ll q=max(c,d);
		if((p>q || p<q) && p > min(c,d) && q > min(a,b))
		   cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
	}
	
	
}
