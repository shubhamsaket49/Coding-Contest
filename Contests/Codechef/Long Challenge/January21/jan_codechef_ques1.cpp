#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int N,K,D,i,sum=0;
	long long int *arr= new long long int[N];

		cin>>N>>K>>D;

		for(i=0;i<N;i++)
		  cin>>arr[i];
		for(i=0;i<N;i++)
		  sum=sum+arr[i];
		
		if(sum<K)
		{
		   cout<<"0"<<endl;
	}
		else if(sum>=K)
		   {
		   	int a= sum/K;
		   	if(a>D)
		   	  cout<<D<<endl;
		   	else
		   	  cout<<a<<endl;
		   }
		
	}
	
}

