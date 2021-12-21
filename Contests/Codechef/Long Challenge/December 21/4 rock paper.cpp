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
		cin>>n;
		char *arr=new char[n];
		char *brr=new char[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		brr[n-1]=arr[n-1];
		for(int i=n;i>=0;i--)
		{
			if(arr[i]==arr[i+1])
			    brr[i]=brr[i+1];
			else if((arr[i]=='P' && arr[i+1]=='S') || (arr[i]=='S' && arr[i+1]=='R') || (arr[i]=='R' && arr[i+1]=='P'))
			    brr[i]=brr[i+1];
			else
			{
				int j=i;
				while(j<n)
				{
					if((arr[i]=='P' && arr[j+1]=='S') || (arr[i]=='S' && arr[j+1]=='R') || (arr[i]=='R' && arr[j+1]=='P') ||(arr[i]==arr[j+1]))
			    	{
			    		brr[i]=brr[j+1];
			    		break;
					}
					else if(j==n-2)
					{
						brr[i]=arr[i];
						j++;
					}
					else
					   j++;
				}
			}
		}
		for(int i=0;i<n;i++)
		   cout<<brr[i];
		cout<<endl;
	}
}
