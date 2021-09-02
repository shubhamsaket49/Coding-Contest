#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,a,b,c,d,next;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	if(n<=2)
	   cout<<"0"<<endl;
	else
	{
		int total=INT_MAX;
		for(int i=-1;i<=1;i++)
		{
			for(int j=-1;j<=1;j++)
			{
				a=arr[0]+i;
				b=arr[1]+j;
				c=b;
				count=abs(i)+abs(j);
				d=b-a;
				for(int k=2;k<n;k++)
				{
					 next=c+d;
					if(abs(next-arr[k])==1)
					   count++;
					else if(abs(next-arr[k])>1)
					{
					   count=INT_MAX;
					   break;
					}
					  	c=next; 
				}
			     total=min(count,total);
			}
			
		}
		if(total==INT_MAX)
		   cout<<"-1"<<endl;
		else
		   cout<<total<<endl;
}
}
