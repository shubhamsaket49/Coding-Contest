#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int t;
	float z;
	double m,p;
	cin>>t;
	while(t--)
	{
		double k1,k2,k3,v;
		cin>>k1>>k2>>k3>>v;
		m= k1*k2*k3*v;
	    p=100/m;
	    double rounded = std::floor((p * 100) + .5) / 100;
		if(rounded<9.58)
	      cout<<"Yes"<<endl;
	    else
	      cout<<"No"<<endl;
		
	}
	
	
	
}
