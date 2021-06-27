#include<iostream>
#include<math.h>
using namespace std;
bool power_two(int n)
{
	if(n==0)
	 return false;
	 return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
	int n,i,T,flag=0;
	cout<<"Enter the number of test cases"<<endl;
	cin>>T;
	while(T--)
	{
cout<<"Enter the values"<<endl;
	cin>>n;
	
	
	if(n==1)
	  cout<<"1"<<endl;
	else if(n==3)
	  cout<<"1 3 2"<<endl;
	else if(n==5)
	   cout<<"2 3 1 5 4"<<endl;
	else if(power_two(n))
	  cout<<"-1"<<endl;
	else
	{
	    cout<<"2 3 1 5 4";	
		i=6;
		while(i<=n)
		{
			if(power_two(i))
			  
			  {
			  	cout<<" "<<i+1<<" "<<i;
			  	i=i+2;
		}
		    else
			{
             cout<<" "<<i;
              i=i+1;
			  
	}
	}
	
}
    cout<<"\n";

}
}
