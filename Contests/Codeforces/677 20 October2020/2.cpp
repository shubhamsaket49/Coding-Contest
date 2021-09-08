#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m=0,p=0,count=0;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
			if(m==0)
			{
			   m=i+1;
			}	
			p=i;
		}
	}
		for(int i=m;i<p;i++)
		{
			if(arr[i]==0)
			   count++;
		}
		cout<<count<<endl;
	}
}
