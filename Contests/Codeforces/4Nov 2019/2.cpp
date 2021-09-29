#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *arr=new int[n+1];
		int *brr=new int[n+1];
		for(int i=1;i<=n;i++)
		   cin>>arr[i];
		for(int i=1;i<=n;i++)
		   brr[i]=0;
		for(int i=n-1;i>=1;i--)
		{
			for(int j=i;j<n;j++)
			{
				if(arr[j]>arr[j+1] && brr[j]==0)
				{
				   swap(arr[j],arr[j+1]);
				   brr[j]=1;
				}
			}
		}
		for(int i=1;i<=n;i++)
		   cout<<arr[i]<<" ";
		cout<<endl;
	}
}
