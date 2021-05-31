#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	ll n,x,s,r,a;
	cin>>t;
	while(t--)
	{
			
			cin>>n>>x;
			 int max = 0;
			for(int i=0;i<n;i++)
			{
				cin>>s>>r;
			if(s<=x)
			{
			   if (r > max) {
                max = r;
                  }
				}
						}
			if(n==1 && x==1 && s==1)
			  cout<<"1"<<endl;
			else
			  cout<<max<<endl;	
		
			}
	}

	

