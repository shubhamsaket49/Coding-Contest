#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && a<c)
            cout<<"Draw"<<endl;
        else if(a>b && c>b)
            cout<<"Bob"<<endl;
        else if(a>c && b>c)
            cout<<"Alice"<<endl;
    }
}
