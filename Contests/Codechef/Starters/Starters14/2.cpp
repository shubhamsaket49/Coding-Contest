#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int main()
{
	int t,flag=0,c=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *arr=new int[n];
		for(int i=1;i<=n;i++)
		   cin>>arr[i];
		for(int i=1;i<=n;i++)
		{
			if(findGCD(arr,n+1)%2==0)
			  {
			  	arr[i]=floor(arr[i]/2);
			  	c++;
			  	
			  }
		}
		cout<<c<<endl;
	}
}
