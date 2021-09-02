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
		int a[n];
		int count=0;
		set<int>set;
		for(int i=0;i<n;i++)
		{
		
			cin>>a[i];
			if(a[i]<0)
			{
			
			    count=1;
			}
			set.insert(a[i]);
		}
		if(count)
		  cout<<"NO"<<endl;
		else
		  {
		  	cout<<"YES"<<endl;
		  	cout<<"101"<<endl;
		  for(int i=0;i<=100;i++)
		    {
		    	cout<<i<<" ";
			}
			cout<<endl;
	}
}
	
	
}
