#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		int n,k=1;
		cin>>n;
			for(int i=1;i<n;i++)
			{
			for(int j=i;j<=n;j+=i)
			{
			for(int k=i;k<=n;k+=j)
			{
		
			if(j%i==0 && k%j==i)
			  count++;
			  
			 
			 
		}
		
       }
   }
		cout<<count<<endl;
}
}
