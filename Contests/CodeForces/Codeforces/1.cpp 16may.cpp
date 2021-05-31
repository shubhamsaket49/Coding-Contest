#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		if(100%k==0)
		{
			cout<<(100/k)<<endl;
		}
		else
		  cout<<"100"<<endl;
	}
}
