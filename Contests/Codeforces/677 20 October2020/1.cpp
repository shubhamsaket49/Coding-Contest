#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a=0;
		cin>>n;
		string s=to_string(n);
		int p=s.size();
		if(p==4)
		   a=10;
		else if(p==3)
		   a=6;
		else if(p==2)
		   a=3;
		else
		   a=1;
	
	 cout<<((n%10)-1)*10+a<<endl;	
		
		}
}
