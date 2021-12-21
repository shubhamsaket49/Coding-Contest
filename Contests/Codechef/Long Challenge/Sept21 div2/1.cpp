#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		int p=a+b;
		int r=b+c;
		int s=a+c;
		if((p<=d && c<=e) || (r<=d && a<=e) || (s<=d && b<=e))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		}
	}

