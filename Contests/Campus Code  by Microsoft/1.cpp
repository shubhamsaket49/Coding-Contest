#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	vector<string>names;
	vector<int>v;

	for(int i=0;i<n;i++)
	{
	  string name;
	  cin>>name;
	  names.push_back(name);
	  string s;
	  while(cin>>s)
	  {
	  	if(s=="LOOT")
		  sum+=10;
		else if(s=="KILL")
		  	sum+=50;
		else if(s=="ASSIST")
		  	sum+=30;
		else
		  	sum+=100;
		  }
		  v.push_back(sum);
		  sum=0;
	  }
	  
	int mx=v[0];
	int mxi=0;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]>mx)
		{
			mx=v[i];
			mxi=i;
		}
	}
	cout<<names[mxi];
}
