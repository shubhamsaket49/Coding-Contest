#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int *arr= new int[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		int *brr=new int[33];
		for(int i=0;i<33;i++)
		{
			brr[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			int w=arr[i];
			int j=32;
			while(w>0)
			{
				brr[j]=brr[j]+w%2;
				w=w/2;
				j--;
			}
		}
		
		int sum=0;
		for(int i=0;i<33;i++)
		{
			if(brr[i]%k==0)
			{
				sum=sum+brr[i]/k;
			}
			else
			  {
			  	sum=sum+(brr[i]/k)+1;
			  }
		}
		cout<<sum<<endl;

	}
	
}
