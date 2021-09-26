#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
	if (a==0)
	   return b;
	return gcd(b%a,a);
}
ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    if (x == 0)
        return 0;
    return x * power(x, y - 1);
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll flag=0;
		ll ta = a;
		ll r = b % a;
	 
	    for(int i = 2; i <= 100; i++)
		{
	        r = (r*b) % a;
	        if(r==0)
			{
	            
	            break;
	        }
	        
	    }
	    

	    if(r == 0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
}
