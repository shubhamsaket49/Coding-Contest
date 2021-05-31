#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n>>d;
		ll count=0, count1=0,x;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
		    if(x<80 && x>9)
		        count++;
			else
				count1++;
		}
				if(count%d==0)
				  count=count/d;
				 else
				    count=count/d+1;
				if(count1%d==0)
				  count1=count1/d;
				 else
				    count1=count1/d+1;
				cout<<count+count1<<endl;
	}
}
