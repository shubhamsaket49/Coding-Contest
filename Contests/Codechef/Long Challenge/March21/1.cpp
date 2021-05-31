#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,h,x,t,i,count=0;
	cin>>n>>h>>x;
	 if(x>=h)
	    {
	     cout<<"Yes"<<endl;
	 }
	else 
	{
	for(i=1;i<=n;i++)
	{
	   cin>>t;
	ll sum=x+t;
		if(sum>=h)
		    count++;
	}
	if(count>=1)
	  cout<<"Yes"<<endl;
	else
	  cout<<"No"<<endl;	
}
	
}
