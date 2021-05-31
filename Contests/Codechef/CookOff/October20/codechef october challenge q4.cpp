#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll cmp1(ll ar[],ll n,ll x,ll p,ll k,ll val)
{
    //for(int i=0;i<=n;i++) cout<<ar[i]<<" ";
    for(ll i=0;i<n;i++)
    {
        ll c = -1;
        if(ar[p-1]!=x)
        {
            ar[k-1] = val;
            c++;
            sort(ar,ar+n);
        }
        else
        {
            return c;
        }
    }
    return -1;
}

ll cmp2(ll ar[],ll n,ll x,ll p,ll k,ll val)
{
    cout<<endl<<" v1: ";
    for(ll i=0;i<n;i++) cout<<ar[i]<<" ";
    for(ll i=0;i<n;i++)
    {
        ll c = -1;
        if(ar[p-1]!=x)
        {
            cout<<endl<<" v2: ";
            for(ll i=0;i<n;i++) cout<<ar[i]<<" ";
            ar[k-1] = val;
            c++;
            cout<<c;
            sort(ar,ar+n);
        }
        else
        {
            cout<<endl<<" ar[p+1] :: "<<ar[p+1]<<" ";
            return c;
        }
    }
    return -1;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,p,k;
        cin>>n>>x>>p>>k;
        ll ar[n];
        for(ll i=0;i<n;i++) cin>>ar[i];
        ll flag = 0;
        for(ll i=0;i<n;i++) 
        {
            if(ar[i] == x) 
            {
                flag = 1;
                break;
            }
        }
        
        sort(ar,ar+n);
        
        if(flag)
        {
            ll c1 = cmp1(ar,n,x,p,k,INT_MIN);
            ll c2 = cmp2(ar,n,x,p,k,INT_MAX);
            cout<<"\n"<<c1<<" "<<c2;
        }
        else
        {
            ll i;
            for(i=0;i<n;i++)
            {
                ll c = -1;
                if(ar[p-1]!=x)
                {
                    ar[k-1] = x;
                    c++;
                    sort(ar,ar+n);
                 }
                else
                {
                    cout<<c<<" ";
                }
        
            }
            if(i==n) cout<<"\n-1";
        }
    }
}
