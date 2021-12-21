#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6;
int a[N],f[N],b[N];
void gcdc(int n)
{
	
	f[1]=a[1];
	b[n]=a[n];
	for(int i=n-1;i>0;i--)
	{
		b[i]=__gcd(b[i+1],a[i]);
	}
	
	for(int i=2;i<n-1;i++)
	{
		f[i]=__gcd(f[i+1],a[i]);
	}
	
}
int main()
{
	ll t,sum,sum1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		sum=0;
		sum1=0;
		ll *arr= new ll[n];
		for(int i=1;i<n+1;i++)
		{
		   cin>>arr[i];
		}
		sort(arr,arr+n+1);
		gcdc(n);
		for(int i=1;i<n+1;i++)
		{

		   sum1+=arr[i];
		}
		int mn=LLONG_MAX;
		for(int i=1;i<n+1;i++)
		{
			sum1=(sum-a[i]+__gcd(f[i+1],b[i+1]))/__gcd(f[i+1],b[i+1]);
			if(sum1<mn)
			    mn=sum1;
		}
		cout<<mn<<endl;
	}
}
		
	
	

