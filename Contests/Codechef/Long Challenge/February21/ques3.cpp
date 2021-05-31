#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		string p;
		cin>>p;
		int n;
		cin>>n;
	  string *arrival= new string[n];
	  string *departure= new string[n];
		for (int i = 0; i < n; i++) {
        	cin>>arrival[i];
        	cin>>departure[i];
        }
        for (int i = 0; i < n; i++)
        {
        if((arrival[i]<p)&& (p <departure[i]))
           cout<<"1";
        else
        cout<<"0";
		 
}
	}
}
