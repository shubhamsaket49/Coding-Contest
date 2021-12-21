#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,z=0,o=0;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		   {
		   	if(s[i]=='0') 
		   	    z++;
		   	else
		   	    o++;
		   }
		cout<<(z*a)+(o*b)<<endl;
	}
}
