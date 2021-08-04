#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,sum,flag;
	cin>>t;
	while(t--)
	{
		sum=0;
		flag=0;
		int n,d,h;
		cin>>n>>d>>h;
		int *arr= new int[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			if(arr[i]>0)
			  sum=sum+arr[i];
			else
			{
				if(sum<d)
				   sum=0;
				else
				  sum=sum-d;
			}
			 if(sum>h)
			 {
			 	flag=1;
			 	break;
			 }
			
		}
	  if(flag==1)
	     cout<<"YES"<<endl;
	  else
	     cout<<"NO"<<endl;
	}
	
	
	
	
}
