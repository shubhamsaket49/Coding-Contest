#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll check_3()
{
    ll ar[3];
    for(int i=0;i<3;i++) cin>>ar[i];
    sort(ar,ar+3);
    
    int count = 0;
    ll a,b;
    a = ar[2];
    b = ar[1];
    ll m; 
    m = min(a,b);
    count = count + m;
    
    a = abs(a-b);
    b = ar[0];
    m = max(a,b);
    count = count + m;
    
    return count;
}


ll check_4()
{
    ll ar[4];
    for(int i=0;i<4;i++) cin>>ar[i];
    sort(ar,ar+4);
    int count = 0;
    ll a,b;
    a = ar[3];
    b = ar[2];
    ll m; 
    m = min(a,b);
    count = count + m;
    
    a = abs(a-b);
    b = ar[1];
    m = min(a,b);
    count = count + m;
    
    a = abs(a-b);
    b = ar[0];
    m = max(a,b);
    count = count + m;
    
    return count;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    if(n==1)
	    {
	        ll a;
	        cin>>a;
	        cout<<a<<endl;
	    }
	    else if(n==2)
	    {
	        ll a,b;
	        cin>>a>>b;
	        if(a>b) cout<<a<<endl;
	        else cout<<b<<endl;
	    }
	    else if(n==3)
	    {
	        cout<<check_3()<<endl;
	    }
	    else if(n==4)
	    {
	        cout<<check_4()<<endl;
	    }
	}
}
