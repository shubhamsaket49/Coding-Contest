#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int ca=0;
	    int cb=0;
	    while(n--)
	    {
	        string str;
	        cin>>str;
	    
	        if(str[0]=='E' || str[0]=='Q' || str[0]=='U' || str[0]=='I' || str[0]=='N' || str[0]=='O' || str[0]=='X')
	          ca+=a;
	        else
	          cb+=b;
	      }
	      if(ca==cb)
	         cout<<"DRAW"<<endl;
	       else if(ca>cb)
	          cout<<"SARTHAK"<<endl;
	        else
	          cout<<"ANURADHA"<<endl;
	        
	        
	    }
	
	
	
	
	
}

