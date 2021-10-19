#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int h=pow(2,n)-1;
		int max_value= h*(h+1);
		int ans=2*k*h;
		cout<<min(max_value,ans)<<endl;
	}
}
