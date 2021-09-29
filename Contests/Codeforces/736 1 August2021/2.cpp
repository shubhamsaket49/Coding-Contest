#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a>b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *arr=new int[n+1];
		for(int i=1;i<=n;i++)
		    cin>>arr[i];
		sort(arr+1,arr+n+1,compare);
		for(int i=1;i<=n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
		}
}
