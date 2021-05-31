#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t,count,flag;
	cin>>t;
	while(t--)
	{
		count=0,flag=0;
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		if(s.length()<k)
		   cout<<"No"<<endl;
		else
		{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='*')
			{
			   count++;
			   if(count==k)
			   {
			     flag=1;
			     break;
			 }
			else
			    flag=0;
		}
		   else
		     count=0;
	}
		if(flag==1)  
		   cout<<"Yes"<<endl;
		else
		   cout<<"No"<<endl;
	}
	}
	
}
