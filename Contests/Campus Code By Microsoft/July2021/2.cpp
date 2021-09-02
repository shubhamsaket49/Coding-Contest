#include<bits/stdc++.h>
using namespace std;
int main()

{
	
	
	
	int k,flag=0;
	cin>>k;
	int n;
	cin>>n;
	int *arr= new int[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	for(int i=0;i<n;i++)
	{
	 int count = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == k)
                flag=1;
	}
	if(flag==1)
	  cout<<"true"<<endl;
	else
	  cout<<"false"<<endl;
}
