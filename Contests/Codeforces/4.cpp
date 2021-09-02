#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr= new int[n];
	int *a= new int[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>arr[i]>>a[i];
	  }
  for(int i=0;i<n;i++)
  	{
  		int sum=0;
		  sum=sum+(arr[i]*a[i]);
  		cout<<sum<<endl;
	  }
	
}

