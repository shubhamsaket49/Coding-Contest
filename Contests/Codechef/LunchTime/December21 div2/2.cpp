#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        vector<char>v;
        for(int i=0;i<m;i++)
        {
            v.push_back(str[i]);
        }
        ll i=0;
        ll j=m-1;
        ll check=1;
        while(i<=j)
        {
            if(check%2)
             {
                 str[--m]=v[i++];
                 
             }
             else
             {
               str[--m]=v[j--];
                 
             }
             check++;
        }
        cout<<str<<endl;
    }
}

