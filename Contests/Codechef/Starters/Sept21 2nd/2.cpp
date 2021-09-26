#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--) 
	{
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		int maxx = 0;
		for (int i=0; i<=20; i++) 
		{
			for (int j=0; j<=20; j++) 
			{
				for (int k=0; k<=20; k++) 
				{
					if (i*a+j*b+k*c <= 240) 
					{
						maxx = max(maxx,i*d+j*e+k*f);
					}
				}
			}
		}
		cout << maxx <<endl;
	}
}
