#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Diff(ll arr[], ll m) 
{ 
    ll ans = 0;
  
    for (ll i = 0; i < 32; i++) { 
        ll count = 0; 
        for (ll j = 0; j < m; j++) 
            if ((arr[j] & (1 << i))) 
                count++; 
 
        ans += (count * (m - count) * 2); 
    } 
  
    return ans; 
} 
int main()
{
	
	ll n,m,k,c=0;
	cin>>n>>m>>k;
	ll *arr= new ll[m+1];
	for(ll i=0;i<=m;i++)
	   cin>>arr[i];
	while(n--)
	{
	
		if(Diff(arr,m+1) <= k)
	       c++;
	       
	   }
	cout<<c<<endl;
}
