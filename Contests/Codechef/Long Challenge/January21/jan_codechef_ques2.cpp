#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll c = 1,sum=0,k=8;
	    for(ll i=0;i<n;i++)
	    {
	        if(s[i]=='1') sum = sum + k;
	        if(c==4) 
	        {
	            cout<<char(97+sum);
	            c=0;
	            sum=0;
	            k=16;
	        }
	        c++;
	        k = k/2;
	    }
	    cout<<endl;
	}
	return 0;
}
