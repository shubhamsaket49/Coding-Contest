#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll *arr=new ll[4];
		for(int i=0;i<4;i++)
		   cin>>arr[i];
		ll sum=(arr[0]*arr[2])+arr[1];
		if(arr[3]<=sum )
		{
			if(arr[3]%arr[2]<=arr[1])
			  cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
			
		else
		   cout<<"NO"<<endl;
	}
}
