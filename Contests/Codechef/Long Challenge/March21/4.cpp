#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()

{
	ll t,sum,f;
	cin>>t;
	while(t--)
	{
		ll n,i;
		cin>>n;
		ll *arr= new ll[n];
		for(i=0;i<n;i++)
		   cin>>arr[i];
		sort(arr,arr+n);
	    sum=0;
	    f=0;
		for(i=0;i<n;i++)
		 {
		 if(arr[i]>(i+1))
		 	{
		 	  f=1;
		 	  break;
		 }
		 	else
		 	{
		    	ll p= arr[i]-(i+1);
		 		sum+=abs(p);
		 	
		 	}
		 }
		 	
		 		if(sum%2==0 || f==1)
		 		  cout<<"Second"<<endl;
		 		else
		 		  cout<<"First"<<endl;
		 
	}
}
	


