#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
{
	int x1,x2,y1,y2,p,r,k;
	cin>>x1>>y1>>x2>>y2>>p>>r;
	k=abs(x1-x2)+abs(y1-y2);
 	if((x1!=x2 && y1!=y2)||((p<min(x1,x2)|| p>max(x1,x2))||(r<min(y1,y2)||r>max(y1,y2))))
	   cout<<k<<endl;
	else
	   cout<<k+2<<endl;
	}	
}
