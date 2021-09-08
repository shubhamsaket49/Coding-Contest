#include<bits/stdc++.h>
using namespace std;
int compute(int n)
{
  if (n % 4 == 0)
    return n;
  if (n % 4 == 1)
    return 1;
  if (n % 4 == 2)
    return n + 1;
return 0;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,n;
		cin>>a>>n;
		int d=compute(a-1);
		if(a==n && a==1)
		{
			cout<<"3"<<endl;
			continue;
		 }
		if(d==n)
		{
			 cout<<a<<endl;
			 continue;
		}
		  
		if((d^n)!=a)
		{
			cout<<a+1<<endl;
			continue;
		}
		    
		else
		{
			cout<<a+2<<endl;
			continue;
		}
		   
		
	}
	
}
