#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int *arr= new int[n];
		for(int i=1;i<=n;i++)
		  cin>>arr[i];
		for(int i=1;i<=n;i++)
		 {
		 	for(int j=1;j<=n;j++)
		 	{
		    	float a =arr[i]-arr[j];
		    	float b=a/arr[i];
		    	float c=a/arr[j];
		    	if(b<c)
		    	    count++;
			}
		}
			cout<<count<<endl;
	}
}
