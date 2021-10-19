#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int x,m,d;
	cin>>x>>m>>d;
	int b=x*m;
	int c=x+d;
	int k= min(b,c);
	cout<<k<<endl;
}
}

