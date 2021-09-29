#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m>n)
	  cout<<"-1"<<endl;
	else
	{
		int p=m*m;
		cout<<((n+2*m-1)/(2/p))<<endl;
	}
	    
}
