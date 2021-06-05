#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     ll D,d,p,q,sum=0;
     cin>>D>>d>>p>>q;
     ll n;
     n=D/d;
     sum+=p*D;
     sum+=d*q*n*(n-1)/2;
     if(D%d!=0){
        sum+=n*q*(D%d);
     }
      cout<<sum<<endl;
    }
}
