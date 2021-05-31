#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll sum=0;
		sum=(n/4)*44;
		int rem=(n%4);
		if(n>=4)
		{
			if(rem==0)
			  sum+=16;
			if(rem==1)
			  sum+=32;
			if(rem==2)
			  sum+=44;
			if(rem==3)
			  sum+=55;
			cout<<sum<<endl;
		}
		
		else
		{
			if(n==1)
			  cout<<"20"<<endl;
			else
			{
			int p= pow(n,2);
			int m= (n * 20) - p;
			cout<<m<<endl;
			
		}
	}
		
	}
	
	
	
	
}
