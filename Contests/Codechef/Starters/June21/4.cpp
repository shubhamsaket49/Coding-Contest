#include<bits/stdc++.h>
using namespace std;
int get(char str[], int l)
{
    int count = 0; 
    int result = 0; 
 
    for (int i = 0; i < l; i++)
    {
        if (str[i] == '0')
            count = 0;
        else
        {
            count++;
            result = max(result, count);
        }
    }
 
    return result;
}
int geto(char str[], int l)
{
    int c = 0; 
    int r = 0; 
 
    for (int i = 0; i < l; i++)
    {
        if (str[i] == '1')
            c = 0;
        else
        {
            c++;
            r = max(r, c);
        }
    }
 
    return r;
}
int main()
{
	int t,one=0,zero=0;
	cin>>t;
	while(t--)
	{
		int l,h;
		cin>>l>>h;
		char str[l];
		for(int i=0;i<l;i++)
		   cin>>str[i];
		   int rem=h;
		for(int i=0;i<l;i++)
		{
			if(str[i]=='0')
			     zero++;
			else
			      one++;
		}
		int d=get(str,l);
		int p=geto(str,l);
		int e=2*(h-d);
	   if(zero==0)
	      cout<<"NO"<<endl;
	   else if(zero==h)
	    cout<<"YES"<<endl;
	   else if(d>=h)
	   {
	     cout<<"YES"<<endl;
	 }
	   else
	      cout<<"NO"<<endl;
	    
		}
	
	
}
