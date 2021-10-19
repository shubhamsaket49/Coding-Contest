#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    n = n * 3;
	    
	    unordered_map<string,ll>m;
	    string str;
	    ll p;
	    
	    while(n--)
	    {
	        cin>>str>>p;
	        m[s]+=p;
	    }
	    
	    vector<int>v;
	    
	    for(auto k:m) 
			v.push_back(k.second);
	    
	    sort(v.begin(),v.end());
	    for(auto k:v) 
		   cout<<k<<" ";
	    cout<<endl;
	    
	    
	}
	return 0;
}
