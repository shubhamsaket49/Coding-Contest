#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		while(!is_sorted(arr.begin(),arr.end()))
		{
		for(int i=c%2;i<n-1;i+=2)
		{
			if(arr[i]>arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			
			}
				
		}
			c++;
	}
		cout<<c<<endl;
	}
}
