#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	   int n,M,x;
	   cin>>n>>M>>x;
	   int count=0;
	   vector<int>a;
	   vector<int>b;
	   vector<int>ans;
	   unordered_map<int,int>un;
	   for(int i=1;i<=n;i++)
	      {
	      	int y;
			  cin>>y;
	      	un[y]=i;
		    if(y>=M)
		      a.push_back(y);
		    else
		      b.push_back(y);
		}
		sort(b.begin(),b.end(),greater<int>());
		int i=0;
		if(a.size()<x)
		  {
		  	while(a.size()!=x)
		  	{
		  		a.push_back(b[i++]);
		  		
			}
		  }
	  cout<<a.size()<<" ";
	  for(int i=0;i<a.size();i++)
	  {
	  	ans.push_back(un[a[i]]);
	  }
	  	sort(ans.begin(),ans.end());
	  	 for(int i=0;i<a.size();i++)
	  {
	  	cout<<ans[i]<<" ";
	}
	cout<<endl;
}
}
	    
