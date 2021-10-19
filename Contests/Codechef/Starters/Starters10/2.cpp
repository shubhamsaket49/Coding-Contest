#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,s;
        cin>>n>>k>>s;
        ll a=n*n;
        cout<<(s-a)/(k-1)<<endl;
    }
}
