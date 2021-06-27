#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t; 
	cin >> t;
	while(t--)
	{
	    ll n, k;
	    ll chef = 0, brother = 0, turn = 0;
	    cin>>n>>k;
	    k = 2*k;
	    ll *arr= new ll[n];
	    for(ll i=0; i<n; i++) 
	        cin >> arr[i];
	    sort(arr, arr+n, greater<ll>());
	    for(ll i=0; i<n-1 && k > 0; i++)
	    {
	            turn++;
	            if(i % 2 == 0) 
	                chef += arr[i];
	            else 
	                brother += arr[i];
	            k --;
	    }
	    if(turn % 2 == 0) 
	         brother += arr[turn];
	    else 
	          chef += arr[turn];
	    cout << max(chef, brother) <<endl;
	    
	}
}
