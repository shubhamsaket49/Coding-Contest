#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,mini;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		sort(arr,arr+n);
		if(n==2)
		   cout<<arr[1]-arr[0]<<endl;
		else if(n==3)
		{
			cout<<min(arr[1]-arr[0],arr[2]-arr[1])<<endl;
		}
		else
		{
		mini=INT_MAX;
		for(int i=0;i<n-1;i++)
		{
		   mini=min(mini,arr[i+1]-arr[i]);
		}
		cout<<mini<<endl;
	}
}
}
