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
		char s='1';
		for(int i=0;i<str.length();i++)
		{
			if(str[i]==s)
			   continue;
			else
			{
				count++;
				s=str[i];
			}
		}
		cout<<count<<endl;
	}
}
