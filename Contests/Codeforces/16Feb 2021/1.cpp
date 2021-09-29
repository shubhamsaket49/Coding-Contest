#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0;;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		for(int i=0;i<n-1;i++)
		{
		
		int maxx=max(arr[i],arr[i+1]);
		int minn=min(arr[i],arr[i+1]);
		while(maxx>2*minn)
		{
			minn=minn*2;
			ans++;
		}		   
		}
		cout<<ans<<endl;
		
	}
}
