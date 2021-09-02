#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,even=0,odd=0,d=0,ans=0;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			    even++;
			else 
			    odd++;
		}
	for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			    arr[i]=0;
			else
			    arr[i]=1;
		}
		for(int i=0;i<n;i+=2)
		{
			if(i%2==0 )
			  {
			  	if((i+1)%2!=1 )
			  	{
			  		d++;
			  		ans+=d;
				}
			}
			  	
			   else if(i%2==1) 
			 	{
			 	 	if((i+1)%2!=0 )
			 	 	{
			  			d++;
			  			ans+=d;
					}
			}
		}
		cout<<ans<<endl;
}
}
