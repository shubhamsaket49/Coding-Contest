#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		string str;
		cin>>str;
		int n=str.length();
		char c=str[0];
		for(int i=0;i<n;i++)
		{
		if(str[i]!=c)
		{  
			if(c=='0')
			   {
			   	count++;
			   	
			   }
			    c=str[i];
		}
			  if(count>1)
			  {
			    count=2;
				break; 
			}
		}
		if(count<2)
		   {
		   	if(c=='0')
		   	  count++;
		   }
		   cout<<count<<endl;
	}
}
