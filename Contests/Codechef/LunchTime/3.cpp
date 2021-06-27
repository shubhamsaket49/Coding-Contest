#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t,flag;
	cin>>t;
	while(t--)
	{
		flag=0;
		string str;
		cin>>str;
		string a="success";
		if(str.size()<=3)
		  a="Error";
		else if(str[0]!='<' || str[1]!='/')
		  a="Error";
		else if(str[str.size()-1] !='>')
		   a="Error";
		else
		{
			for(int i=2;i<str.size()-1;i++)
			{
				if(!((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')))
				    a="Error";
			}
		}
	
	cout<<a<<endl;
}
}
