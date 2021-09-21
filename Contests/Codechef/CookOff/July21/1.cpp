#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		   cout<<"0"<<endl;
		else if(a==0 && b==0 && c==0)
		   cout<<"0"<<endl;
		else if((a==0 && b==1) || (a==0 && c==1) ||(b==0 && c==1) ||(a==1 && b==0) || (a==1 && c==0) ||(b==1 && c==0))
		    cout<<"1"<<endl;
		    
	}
	
	
}
