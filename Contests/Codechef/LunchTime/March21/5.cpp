#include <iostream>
using namespace std;

int main() {
    
    int a,t;
    cin>>t;
    while(t--)
    {
        int x,r,m,move,rest;
        cin>>x>>r>>m;
        int temp=x;
        if(m%2!=0 && x!=0)
            {
            	a=m/2;
              x=(x-60)*(a+1);
            }
            else
           {
                x=(x+60)*a;
            }
        if(x>=0 && r<=a)
          cout<<"Yes"<<endl;
        else
          cout<<"No"<<endl;
    }
    
    
    
    
}

