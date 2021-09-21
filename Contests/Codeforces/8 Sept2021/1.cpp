#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ca=0,cb=0,r=0,s=0,flag=1;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<n;i++)
		{
			if(str[i]=='a')
			   ca++;
			else
			   cb++;
		}
		if(!ca || !cb)
		  flag=0;
		else
		{
		for(int i=0;i<n-1;i++)
		{
			if(str[i]=='a' && str[i+1]=='b')
			{
				r=i+1;
				s=i+2;
				flag=1;
				break;
			}
			else if(str[i]=='b' && str[i+1]=='a')
			{
				r=i+1;
				s=i+2;
				flag=1;
				break;
			}
			  
		}
	}
		if(flag==1)
		   cout<<r<<" "<<s<<endl;
		else
		   cout<<"-1"<<" "<<"-1"<<endl;
	}
}
