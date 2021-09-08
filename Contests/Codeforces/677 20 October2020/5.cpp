#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
		ll n;
		cin>>n;
		ll p=n/2;
		ll round=(fact(n)/(fact(p)*fact(n-p))) / 2*fact(n/2-1)*fact(n/2-1);
		cout<<round<<endl;
		
}
