#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
ll t,flag;
cin>>t;
while(t--)	
{
	flag=0;
	ll n,x,k;
	cin>>n>>x>>k;

	if(x%k==0)
	  cout<<"YES"<<endl;
	else if(((n+1)-x)%k==0)
	  cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
}
