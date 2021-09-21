#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d,count=0;
		cin>>a>>b>>c>>d;
		if((a-1)>b+c+d || (b-1)>a+c+d || (c-1)>a+b+d)
		    cout<<"NO"<<endl;
		else if(d<=(a+b+c-3))
		    cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
	}
}
