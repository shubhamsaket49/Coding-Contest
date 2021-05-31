#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,p=1,b;
cin>>t;
while(t--)
{
int a[10],b[10], n, i;      
 cin>>n;   
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}       
for(i=i-1 ;i>=0 ;i--)    
   b[i]=a[i]|(1<<n); 
   cout<<b[i]<<endl;    
    
}  
}
