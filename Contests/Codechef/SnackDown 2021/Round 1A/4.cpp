#include<bits/stdc++.h>
#define ll long long
using namespace std;
void saket()
{
		ll n; 
 		cin>>n;
    	ll *arr=new ll[n]; 
		for(int i=0;i<n;i++) 
			cin>>arr[i];
    	if(n == 2) 
    	{
        	cout<<"0"<<endl;
        	return;
    	}
    	if(n == 3)
    	{
        	cout<<min(abs(arr[0]-arr[1]),abs(arr[0]-arr[2]))<<endl;
        	return;
	    }
    
    	sort(arr,arr+n);
    	ll count1=0,count2=0;
    
    	for(int i=0;i<n-1;i++)
    	{
        count1+=abs(arr[i] - arr[(n-1)/2]);
    	}
    
     	for(int i=1;i<n;i++)
    	{
        count2+=abs(arr[i] - arr[1 + (n-1)/2]);
    	}
    
    	ll mini = min(count1,count2);
    	ll l = 1;
    	ll r = n-2;
    
    	while(l<r)
    	{
        ll p2 = arr[n-1] - arr[l];
        ll p1 = arr[r] - arr[0];
        mini = min(mini,abs(p1 - p2));
        
        if(p1 < p2) l++;
        else r--;
    }
    
    cout<<mini<<endl;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
 		saket();
	}
}
