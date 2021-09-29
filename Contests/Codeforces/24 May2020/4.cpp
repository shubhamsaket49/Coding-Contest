#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,maxi=0;
    	cin>>n>>k;
    	if(n<=k)
      		cout<<"1"<<endl;
    	else
    	{
    		for(ll i=1;i<=sqrt(n);i++)
    		{
    			if(n%i==0)
    			{
    		  		if(i<=k)
    		  		  maxi=max(maxi,i);
    		  		if(n/i<=k)
    		  		  maxi=max(maxi,n/i);
    			}
			}
	    	cout<<n/maxi<<endl;
	}
}
}
