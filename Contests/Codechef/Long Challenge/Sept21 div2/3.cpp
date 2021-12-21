#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;
		cin>>n;
		int *arr=new int[n];
		int *brr=new int[n];
		for(int i=1;i<=n;i++)
		   cin>>arr[i];
	
		for(int i=1;i<=n;i++)
			{
			if(arr[i]%2==0 && i%2==0 )
			   brr[i-1]=arr[i];
			else
			   brr[i+1]=arr[i];
			    
		}
	cout<<sum<<endl;
	}
}
