#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll c = n-k;
        int ar[n];
        for(ll i=0;i<n;i++) ar[i] = i+1;
        for(ll i=0;i<n;i+=2) 
        {
            if(c>0) ar[i] = ar[i]*-1,c--;
            else break;
        }
        ll i;
        if(n%2==0) i = n-1;
        else i = n-2;
        for(;i>0;i-=2) 
        {
            if(c>0) ar[i] = ar[i]*-1,c--;
            else break;
        }
        
        for(ll i=0;i<n;i++) cout<<ar[i]<<" "; 
        cout<<endl;
    }
}
