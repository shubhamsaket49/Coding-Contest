#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		if(n<3)
		 cout<<"1"<<endl;
		else
		  cout<<((n+x-3)/x+1)<<endl;
	
	}
}
