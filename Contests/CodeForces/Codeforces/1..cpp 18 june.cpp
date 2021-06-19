
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int sum=0;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
		if(sum<0 || sum<n)
		   cout<<"1"<<endl; 
		else if(sum==n)
		{
		    cout<<"0"<<endl; 
		}

		else
		{
          cout<<abs(sum-n)<<endl;

		}
	}
	}



