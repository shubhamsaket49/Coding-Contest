#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> primeFactors(int n) 
{ 
    vector<int>v;

    while (n%2 == 0) 
    { 
        v.push_back(2);
        n = n/2; 
    } 
     
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.push_back(i);
            n = n/i; 
        } 
    } 
    if (n > 2) 
        v.push_back(n); 
    return v;
} 

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a,b,sum=0;
		cin>>n>>a>>b;
	vector<int>v;
	v=primeFactors(n); 
	for(int i=0;i<v.size();i++)
	{
		if(v[i]%2!=0)
		  	sum+=b;
		else
		   sum+=a;
	}
	if(n%2==0)
	   cout<<max(sum,a)<<endl;
	else
	   cout<<max(sum,b)<<endl;

		
	}
}
