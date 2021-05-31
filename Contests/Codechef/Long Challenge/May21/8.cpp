#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b)
{
  int rem;
  for(;;)
  {
    rem=a%b;
    if(rem==0)
       break;
    a=b;
    b=rem;
  }
 return b;
}
int main()
{
	int t,x,y,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		int k;
		cin>>k;
		int *arr= new int[2*k+1];
		int *brr= new int[2*k+1];
		for(int i=1;i<=2*k+1;i++)
		{
			arr[i]=k+pow(i,2);
		}
		
		for(int i=1;i<=2*k;i++)
		{
     	x=arr[i];
     	y=arr[i+1];
    	brr[i]=gcd(x,y);
    }
    for(int i=1;i<=2*k;i++)
		{
			sum=sum+brr[i];
		}
			cout<<sum<<endl;
}	
}
