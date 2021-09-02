#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{

     ll k;
     cin>>k;

     while(k--)
     {
          ll n;
          cin>>n;

          ll ar[n];
          for(ll i=0;i<n;i++) cin>>ar[i];

          ll min = ar[0];
          bool mini = true;
          for(ll i=1;i<n;i++)
          {
              if(min<ar[i])
              {
                  mini = false;
                  break;
              }
          }

          ll max = ar[n-1];
          bool maxa = true;
          for(ll i=n-2;i>=0;i--)
          {
              if(max>ar[i])
              {
                  maxa = false;
                  break;
              }
          }


          bool mini1 = true;
          for(ll i=1;i<n;i++)
          {
              if(ar[0]>ar[i])
              {
                  mini1 = false;
                  break;
              }
          }

          bool maxa1 = true;
          for(ll i=n-2;i>=0;i--)
          {
              if(ar[n-1]<ar[i])
              {
                  maxa1 = false;
                  break;
              }
          }

          ll midi = true;
          for(ll i=2;i<n-1;i++)
          {
              if(ar[i]<ar[i-1])
              {
                  midi = false;
                  break;
              }
          }

          if(mini1 == true && maxa1 == true && midi == true) cout<<"0\n";
          else if(mini1 == true) cout<<"1\n";
          else if(maxa1 == true) cout<<"1\n";
          else if(mini == true && maxa == true)
          {
              cout<<"3\n";
          }
          else cout<<"2\n";
     }

}
