#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,mini=INT_MAX,a=-2;
		cin>>n;
		ll *arr=new ll[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		map<int,int>m;
		for(int i=0;i<n;i++)
		  m[arr[i]]++;
		for(int i=0;i<n;i++)
		{
			if(m[arr[i]]==1 && arr[i]<mini)
			{
				a=i;
				mini=arr[i];
			}
		}

		cout<<a+1<<endl;
	}
	
}
