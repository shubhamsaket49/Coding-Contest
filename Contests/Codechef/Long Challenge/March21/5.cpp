#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t,s,r,m,p,z;
	ll d=0;
	cin>>t;
	while(t--)
	{
		ll n,e,h,a,b,c,count=0;
		ll egg,shake,cake;
		cin>>n>>e>>h>>a>>b>>c;
		if(a>c & b>c & h>=n)
		{
		   z=n*c;
		   cout<<z<<endl;	
		}
		else
		{
		egg=e/2;
		r=e-2*egg;
		shake=h/3;
		s=h-3*shake;
		if(r>=s)
		  cake=s;
		else if(r<s)
		  cake=r;
        else
		  cake=0;   	 		
		d=egg+shake+cake;
	    //m=n-egg-shake;
		if(d<n)
		       cout<<"-1"<<endl;
	    /*else if(n<d)
	          {
	          	if((a < b ) &(a < c) &(b<c)) 
	          	{
	          		cout<<n*a<<endl;
				  }
				else if((a > b ) &(c > b) & (a>c)) 
	          	{
	          		cout<<n*b<<endl;
				  }
				else if((a > c ) &(b > c) &(a>b)) 
	          	{
	          		cout<<n*c<<endl;
				  }
				
			  }*/
		else
		       cout<<((egg*a)+(shake*b)+(cake*c))<<endl;
		   
	}
	}
	
}
