#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
	cin>>n;
	string str;
	cin>>str;
	if(n<3)
	   cout<<"0"<<endl;
	else
	{
		int count=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='x' && str[i+1]=='x' && str[i+2]=='x')
			    count++;
		}
		cout<<count<<endl;
	}
}
