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
    	string str = "()";
    	for(int i=0;i<n;i++)
   		{
        	for(int j=0;j<i;j++) 
		   		cout<<str;
        	int m = n-i ;
        	for(int i=0;i<m;i++) 
				cout<<"(";
        	for(int i=0;i<m;i++) 
				cout<<")";
        	cout<<endl;
    	}
		
	}
}
