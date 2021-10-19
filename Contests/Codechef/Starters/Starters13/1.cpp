#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,x,y,co=0,c1=0;
		cin>>n>>p>>x>>y;
		int *arr=new int[n];
		for(int i=1;i<=n;i++)
		   cin>>arr[i];
		for(int i=1;i<=p;i++)
		{
			if(arr[i]==0)
			   co++;
			else if(arr[i]==1)
			   c1++;
		}
		//cout<<co<<c1<<endl;
		cout<<(co*x)+(c1*y)<<endl;
	}
}
