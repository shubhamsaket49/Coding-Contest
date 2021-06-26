 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *arr= new int[n+1];
		for(int i=1;i<=n;i++)
		    {
		    	arr[i]=i;
			}
		for(int i=1;i<n;i=i+2)
		{
			int t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;

		}
		if(n%2==0)
		{
			for(int i=1;i<=n;i++)
				cout<<arr[i]<<" ";
		}
		else
		{
			int temp=arr[n];
			arr[n]=arr[n-2];
			arr[n-2]=temp;
			for(int i=1;i<=n;i++)
			    cout<<arr[i]<<" ";
				
		}
		cout<<endl;
	}
	
	
	
}
