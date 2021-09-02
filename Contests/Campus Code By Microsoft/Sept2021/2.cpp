#include<bits/stdc++.h>
using namespace std;
void leftrotate(string str1, int d)
{
    reverse(str1.begin(), str1.begin()+d);
    reverse(str1.begin()+d, str1.end());
    reverse(str1.begin(), str1.end());
}
 
 
int main()
{
	string str1,str2,k,len;
	cin>>str1;
	leftrotate(str1,1);
	while(cin>>str2)
	{
		if(str1==str2)
		{
			cout<<str2<<"\n";
			break;
		}
       
	   
}
	
}
