#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n>>s;
		ll sum=(n*(n+1))/2;
		ll a=sum-s;
		if(a!=0)
		 cout<<a<<endl;
		else
		  cout<<"-1"<<endl;
	}#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n>>s;
		ll sum=(n*(n+1))/2;
	    sum = sum - s;
        if (sum >= 1 &&  sum <= n)  
            cout <<sum << endl;
        else 
            cout << "-1" << endl;
	}
}
