#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
    ll n; 
	cin >> n;
    int *arr=new int[n], count = 0;
    ll sum = 0;
    for(int i=0; i<n; i++) 
	{
        cin>>arr[i];
        
        if(arr[i] % 2 == 0) 
			count++;
        if(i > 0)
		{
            sum += abs(arr[i] - arr[i-1]);
        }
    }
    if(count == 0 || count == n || (n == 2 && abs(arr[0] - arr[1]) % 2 == 0)) 
	    cout << "-1";
	    
    else{
        for(int i=0; i<n; i++)
            if(arr[i] % 2 == 0) 
			    cout << arr[i] << " ";
        for(int i=0; i<n; i++)
            if(arr[i] % 2) 
			cout << arr[i] << " ";
    }
    cout<<endl;
}
    
}

