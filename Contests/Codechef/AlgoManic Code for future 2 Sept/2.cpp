#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,l;
		cin>>n>>k>>l;
		 int *arr=new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		int m=INT_MIN;
		int f=n-1;
		int flag=1;
		//arr[n-1]=arr[n-1]+k*(l-1);
		for(int i=0;i<n-1;i++)
		{
			if(arr[i]>=arr[f])
			{
			  flag=0;
			}	
		}
		if(flag)
		   cout<<"Yes"<<endl;
		else
		{
			flag=1;
			arr[f]=arr[f]+k*(l-1);
			for(int i=0;i<n-1;i++)
			{
				if(arr[i]>=arr[f])
				{
					flag=0;
					
				}
			}
			if(flag)
			   cout<<"Yes"<<endl;
			else
			   cout<<"No"<<endl;
		}
	}
	cout<<endl;#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,l;
		cin>>n>>k>>l;
		 int *arr=new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		int m=INT_MIN;
		int f=n-1;
		int flag=1;
		//arr[n-1]=arr[n-1]+k*(l-1);
		for(int i=0;i<n-1;i++)
		{
			if(arr[i]>=arr[f])
			{
			  flag=0;
			}	
		}
		if(flag)
		   cout<<"Yes"<<endl;
		else
		{
			flag=1;
			arr[f]=arr[f]+k*(l-1);
			for(int i=0;i<n-1;i++)
			{
				if(arr[i]>=arr[f])
				{
					flag=0;
					
				}
			}
			if(flag)
			   cout<<"Yes"<<endl;
			else
			   cout<<"No"<<endl;
		}
	}
	cout<<endl;
}
