#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		map<int,int>m1;
		map<int,int>m2;
	    string str;
	    cin>>str;
		
		for(int i=0;i<n;i++)
		{
			m1[((i+1)-int(str[i]-'0'))]++;
			m2[((i+1)+int(str[i]-'0'))]++;
		}
		int ans=0;
		for(auto it: m1)
		   ans+=(it.second*(it.second-1))/2;
		for(auto it: m2)
		   ans+=(it.second*(it.second-1))/2;
		   
		cout<<ans<<endl;
	}
}

