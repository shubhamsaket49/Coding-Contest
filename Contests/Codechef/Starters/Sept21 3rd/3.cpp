#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,a,c,b,d,p,r; 
    	cin>>n>>m>>a>>c>>b>>d;
    	p=a+(b*m);
    	r=c+(d*m);
    	if(p<=r) 
			cout<<n/p<<endl;
    	else 
			cout<<n/r<<endl;
	}
}
