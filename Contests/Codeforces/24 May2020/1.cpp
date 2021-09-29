#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b;
		c=min(max(2*a,b),max(a,2*b));
		cout<<c*c<<endl;
	}
}
