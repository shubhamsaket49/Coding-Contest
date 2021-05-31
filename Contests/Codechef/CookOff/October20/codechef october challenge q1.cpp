#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll ar[n];
	    for(ll i = 0; i<n;i++) cin>>ar[i];
	    ll sum = 0,days;
	    for(ll i = 0; i<n;i++)
	    {
	        sum+=ar[i];
	        sum-=k;
	        if(sum < 0)
	        {
	            days = i+1;
	            break;
	        }
	    }
	    if(sum == 0) days = n + 1;
	    else if(sum>0) 
	    {
	        days = n+sum/k;
	        days++;
	    }
	    cout<<days<<endl;
	}
	return 0;
}
