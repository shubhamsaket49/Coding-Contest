#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k,count=0;
		cin>>n>>k;
		int *arr= new int[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		int a=largest(arr,n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((j-i+1)>=k && arr[i+k-1]==a)
				    count++;
			}
		}
		cout<<count<<endl;
	}
	
		
		
		
		
		
	}

