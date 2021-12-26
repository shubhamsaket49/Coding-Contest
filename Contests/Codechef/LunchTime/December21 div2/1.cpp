#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll *arr=new ll[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        sort(arr,arr+n);
        ll mini=arr[0];
        ll maxx=INT_MIN;
        ll maxi=arr[n-2];
        for(int i=0;i<n;i++)
        {
            if(((arr[i] - mini)*maxi)> maxx)
                maxx=(arr[i] - mini)*maxi;
        }
        cout<<maxx<<endl;
    }
}

