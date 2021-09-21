#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int t; 
	cin >> t;
    while(t--)
{
    int n, k; 
	cin >> n >> k;
    int a[n], c = 0, d = 0, mx = 0;
    string s; 
	cin >> s;
    char ch = s[0];
    for(int i=0; i<n; i++){
        if(s[i] == '0') 
		  c++;
        else 
		   d++;
    }
    for(int i=1; i<n; i++){
        if(ch != s[i]) mx++;
        ch = s[i];
    }
    if(k > mx) 
	   cout << -1;
    else{
        int o = -1, z = -1;
        for(int i= n-1; i>=0; i--)
		{
            if(s[i] == '1') 
			{ 
			o = i+1; 
			break; 
		}
        }
        for(int i= n-1; i>=0; i--){
            if(s[i] == '0') 
			{ 
			z = i+1; 
			break; 
			
			}
        }
        if(s[0] == '1'){
            if(k % 2 == 0) 
			  cout << o;
            else 
			  cout << z;
        }
        else{
            if(k % 2 == 0) 
			   cout << z;
            else 
			  cout << o;
        }
    }
    
   cout<<endl; 
}
}
