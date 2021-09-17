#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      if(n&1)
      {
	    vector<vector<int>>arr(n,vector<int>(n,1));
          int j=0;
          for(int i=0;i<n;i++)
          {
              arr[i][j]=-1;
              j++;
          }
          for(int i=0;i<n;i++)
          {
              for(int k=0;k<n;k++)
              cout<<arr[i][k]<<" ";
 
              cout<<endl;
          }
 
      }
      else
      {
          vector<vector<int>>arr(n,vector<int>(n,-1));
           for(int i=0;i<n;i++)
          {
              for(int k=0;k<n;k++)
              cout<<arr[i][k]<<" ";
 
              cout<<endl;
          }
      }
 
  }
}
