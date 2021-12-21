#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll *arr=new ll[n];
		ll m[200005]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}
		   
	
		ll maxx=-1;
    	ll count = 0;
    	for(int i = 0; i < 200005; i++) 
		{
        	if(m[i])
			{
				 count++;	
			} 
            maxx=max(maxx,m[i]);
    	}
		if(count==1)
		  cout<<"0"<<endl;
		else if(maxx==1)
		   cout<<"-1"<<endl;
		else
			cout<<(n-maxx+1)<<endl;
	}
}
