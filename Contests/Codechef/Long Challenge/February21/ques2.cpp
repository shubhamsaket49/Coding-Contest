#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll t;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   ll ar[n];

   for(ll i=0;i<n;i++) 
     cin>>ar[i];
   sort(ar,ar+n);
   ll b=ar[n-1]-ar[0];
   cout<<2*b<<endl;
}
return 0;
}
