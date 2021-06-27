#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string a="success";
        
        if(str[0]> '1')
        
        {
            str="1"+str;
        }
        else
        {
          str="10"+str.substr(1,str.size()-1);
        }
        cout<<str<<endl;
        
        
    }
}

