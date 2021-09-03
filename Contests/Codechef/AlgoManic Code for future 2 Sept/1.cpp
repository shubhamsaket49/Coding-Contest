#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//int n=3;
		int a1[3],c1=0,c2=0,c3=0,c4=0;
		int b1[3];
	   for(int i=0;i<3;i++)
	    {
	    	cin>>a1[i];
	    	if(a1[i]==1)
	    	   c1++;
	    	else
	    	  c2++;
		}
	for(int i=0;i<3;i++)
	    {
			cin>>b1[i];
			if(b1[i]==1)
			   c3++;
			else
			   c4++;
		}
		//cout<<c1<<c2<<c3<<c4;
		
		if(c1==c3 && c2==c4)
		   cout<<"Pass"<<endl;
		 else
		    cout<<"Fail"<<endl;		
	}
}
