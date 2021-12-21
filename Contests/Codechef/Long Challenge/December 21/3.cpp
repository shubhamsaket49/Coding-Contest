#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		string str="";
		if(m==n)
		{
			for(int i=0;i<n+1;i++)
			   str+="10";
			
		}
		else if(m>n)
		{
			for(int i=0;i<n+1;i++)
			{
				str+="10";	
			}
			for(int i=0;i<m-n-1;i++)
			{
					str+="110";
			}	
			str+="1";
		}
		else
		{
			for(int i=0;i<m;i++)
			{
				str+="01";
			}		
			for(int i=0;i<n-m;i++)
			{
				str+="010";
			}
				
		}
		cout<<str.size()<<endl;
		cout<<str<<endl;
	}
	
}
