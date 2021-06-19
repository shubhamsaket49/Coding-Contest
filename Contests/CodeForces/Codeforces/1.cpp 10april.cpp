#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j=0;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int *arr= new int[n];
		map<int,int>mp;
		for(i=0;i<n;i++)
		{
		  cin>>arr[i];
		  mp[arr[i]]++;
		  if(mp[arr[i]]>1)
		    {
		    	j=arr[i];
			}
	}
	
		for(i=0;i<n;i++)
		{
			if(arr[i]!=j)
			{
			  cout<<i+1<<endl;
			  break;
		}
		}
}
}
