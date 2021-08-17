#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	while(t--)
	{
		
		int a,b;
		cin>>a>>b;
		if(a==b)
		  cout<<"0"<<endl;
		else
		{
			if(a>b)
			{
			  x=b+1;
			}
			else if(b>a)
			{
			   x=a+1;
			}
			int f=ceil(double(b-x)/2*1.0)+ceil(double(x-a)/2*1.0);
			cout<<f<<endl;
		}
		
		
	}
}
