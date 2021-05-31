#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,x,y,flag=0,count=0;
    cin>>t;
    while(t--)
    {
    cin>>x>>y;
    if (x <= 1)
     flag=1;
   for (int i = 2; i<= x; i++){
      if (x % i == 0){
         flag=1;
         break;
      }
      else 
        count++;
        flag=0;
   }
    if(count<y)
      cout<<"Chef"<<endl;
    else
      cout<<"Divyam"<<endl;
    
}
}
