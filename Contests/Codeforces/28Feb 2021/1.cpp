#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,k,z=0,o=0;
	cin>>n>>m;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
		    z++;
		else
		   o++;
	}
	for(int i=0;i<m;i++)
	{
		cin>>x>>k;
		if(x==1)
		{
		   	arr[k-1]=1-arr[k-1];
		   	if(arr[k-1]==0)
		   	{
		   	  	z++;
		   	  	o--;
			}
			else
			{
				
				o++;
				z--;
			}
		   }
		else
		{
			if(k<=o)
			  cout<<"1"<<endl;
			else
			   cout<<"0"<<endl;
		}
		  
	}
}
