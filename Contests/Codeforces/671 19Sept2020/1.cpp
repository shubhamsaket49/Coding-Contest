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
		string s;
		cin>>s;
		if(n%2==0)
		{
			for(int i=2;i<=n;i+=2)
			{
				int p=s[i]-'0';
				if(p%2==0)
				{
				    cout<<"2"<<endl;
	
				    
				}
				
			}
			cout<<"1"<<endl;
			  
		}
		else
		{
				for(int i=1;i<=n;i+=2)
				{
				int p=s[i]-'0';
				if(p%2==1)
				{
				    cout<<"1"<<endl;
				    
				}
				
			}
			cout<<"2"<<endl;
		}
	}
}
