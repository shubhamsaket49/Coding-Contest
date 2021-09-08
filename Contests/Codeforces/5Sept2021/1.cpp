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
		string str,s="";
		cin>>str;
		for(int i=0;i<n;i++)
		{
			
			   if(str[i]=='L')
			   s=s+"L";
			   else if(str[i]=='R')
			   s=s+"R";
			   else if(str[i]=='U')
			   s=s+"D";
			   else
			    s=s+"U";
		}
		cout<<s<<endl;
	}
}
