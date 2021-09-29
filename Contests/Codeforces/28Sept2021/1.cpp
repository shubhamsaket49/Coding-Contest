#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		int p=0,q=0,r=0;
		for(int i=0;i<n;i++)
		{
			if(str[i]=='A')
			   p++;
			else if(str[i]=='B')
			    q++;
			else
			   r++;
		}
		if(p+r==q)
		   cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
	}
}
