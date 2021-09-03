#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int *arr=new int[n];
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<k;i++)
        {
            m[v[i]]++;
            
        }
        cout<<v[k/2]<<endl;
        for(int i=0;i<n;i++)
          if(m.find(arr[i]) !=m.end())
              cout<<arr[i]<<" ";
    }
    cout<<endl;
}
