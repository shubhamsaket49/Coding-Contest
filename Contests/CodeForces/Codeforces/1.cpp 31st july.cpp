#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll x=n/6;
		ll y=n%6;
		if(n<=6)
		   cout<<"15"<<endl;
		else if(y==0)
		   cout<<x*15<<endl;
		else if(y<=2)
		   cout<<(x*15)+5<<endl;
		else if(y<=4)
		    cout<<(x*15)+10<<endl;
		else
		   {
		   	x++;
		   	cout<<x*15<<endl;
		   }
		    
	}
}
