#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll c1=0,c2=0,c3=0;
		ll *arr= new ll[5];
		for(int i=0;i<5;i++)
		   cin>>arr[i];
		for(int i=0;i<5;i++)
		{
			if(arr[i]==1)
			   c1++;
			else if(arr[i]==2)
			   c2++;
			else
			   c3++;
		}
		if(c1>c2)
		   cout<<"INDIA"<<endl;
		else if(c2>c1)
		   cout<<"ENGLAND"<<endl;
		else
		   cout<<"DRAW"<<endl;
		
	}
}
