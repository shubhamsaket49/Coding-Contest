#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    int t; 
	cin >> t;
    while(t--)
	{
    int n; 
	cin >> n;
    string s, p; 
	cin >> s >> p;
    if(s == p)  
		cout << "YES"; 
    int c = 0, d= 0;
    for(int i=0; i<n; i++)
	{
        if(p[i] == '0') 
			c++;
        else if(p[i] == '1') 
			d++;
    }
    if(c == 0 || d == 0) 
		cout << "NO";
    else 
		cout << "YES";
    cout << "\n";
}

}
