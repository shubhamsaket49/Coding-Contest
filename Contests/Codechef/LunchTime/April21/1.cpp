#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,s;
		cin>>m>>s;
		if(s>m)
		  cout<<"0"<<endl;
		else
		{
			int a=m/s;
			cout<<a<<endl;
		}
	}
}
