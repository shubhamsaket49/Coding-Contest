#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s1=0;
		int s2=0;
		int arr[10];
		for(int i=1;i<=10;i++)
		  cin>>arr[i];
		for(int i=1;i<=10;i++)
		{
			if(i%2!=0)
			   s1=s1+arr[i];
			else
			   s2=s2+arr[i];
		}
		if(s1>s2)
		   cout<<"1"<<endl;
		else if(s1<s2)
		    cout<<"2"<<endl;
		else
		    cout<<"0"<<endl;
	}
}
