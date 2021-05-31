#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	ll T;;
	cin>>T;
	while(T--)
	{
	 ll a,b;
		cin>>a>>b;
		ll c=a*b;
		if(c%2==0)
		 cout<<c/2<<endl;
		else
		  cout<<c/2+1<<endl;
	}
    return 0;
}
		
