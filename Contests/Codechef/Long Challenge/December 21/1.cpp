#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		char str[3];
		char x,y;
		int ind=0,index=0;
		for(int i=0;i<3;i++)
		    cin>>str[i];
		cin>>x>>y;
		for(int i=0;i<3;i++)
		{
			if(str[i]==x)
			  ind=i;
			else if(str[i]==y)
			  index=i;
		}
		if(ind<index)
		  cout<<x<<endl;
		else
		  cout<<y<<endl;
	}
}
