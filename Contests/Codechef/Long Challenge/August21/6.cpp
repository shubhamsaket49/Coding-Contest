#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,count=0,l=0,r;
		cin>>n;
		vector<pair<pair<ll,ll>,ll>>arr(n);
		vector<ll>ans;
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			arr[i].first.first=x;
		}
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			arr[i].first.escond=x;
			arr[i].second=i+1;
		}
		sort(arr.begin(),arr.end());
		int check=0;
		for(ll i=0;i<arr.size();i++)
		{
			if(arr[i].first.first>arr[i].first.second)
			{
			   continue;
			   		   
			}
			if(i==0)
			{
				r=arr[i].first.first;
				ans.push_back(arr[i].second);
				ans.push_back(l);
				ans.push_back(r);
				l=r;
				count++;
				continue;
			}
			if(arr[i].first.second-l>=arr[i].first.first)
			{
				r=arr[i].first.first+l;
				ans.push_back(arr[i].second);
				ans.push_back(l);
				ans.push_back(r);
				l=r;
				count++;
		
	}
}
   cout<<count<<endl;
   for(ll i=0;i<ans.size(),i++)
   {
   	cout<<ans[i]<<" ";
   	if((i+1)%3==0)
   	    cout<<endl;
   }
}
}

