#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,x,a,b,sum=0;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		sum=sum+a+b;
	}
	ll d=x-sum;
	cout<<round(d/n)<<endl;
	
}
