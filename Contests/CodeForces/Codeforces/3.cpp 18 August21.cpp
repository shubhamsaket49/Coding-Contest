#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(floor(sqrt(n)) == ceil(sqrt(n)))
		    cout<<sqrt(n)<<" "<<"1"<<endl;
		else
		{
			int p=sqrt(n)+1;
			int d=(p*p)-n;
			if(d==p-1)
			   cout<<p<<" "<<p<<endl;
			else if(d<p-1)
			   cout<<p<<" "<<d+1<<endl;
			else
			{
				int s=sqrt(n);
				int k=s*s+1;
				cout<< n-k+1 <<" "<<p<<endl;
			}
		}
		
		
	}
}
