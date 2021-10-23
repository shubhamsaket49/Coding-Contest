#include<bits/stdc++.h>
#define ll long long
using namespace std;
void harsh()
{
	ll n,k;
		cin>>n>>k;
		if(k==0)
		{
			cout<<"YES"<<endl;
			cout<<"0"<<endl;
			return;
		}
		if(k%2==0)
		{
			cout<<"NO"<<endl;;
			return; 
		}
		ll s=0;
		for(ll i=31;i>=0;i--)
		{
			if(((1<<i)&k)!=0)
			{
				s=i+1;
				break;
			}
		}
		k=(k+(1<<s)-1)/2;
		cout<<"YES"<<endl;
		cout<<s<<endl;
		int sum=1;
		vector<int>vec;
		for(int i=s-2;i>=0;i--)
		{
			if(((1<<i)&k)!=0)
			{
				vec.push_back(sum);
				sum+=(1<<i);
			}
			else
			{
				sum-=(1<<i);
				vec.push_back(sum);
			}
		}
		for(int i=s-2;i>=0;i--)
		   cout<<vec[i]<<endl;
		cout<<sum<<endl;
		
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		harsh();
	}
}
