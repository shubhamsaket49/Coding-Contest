#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void newyear()
{
	int n; 
	cin>>n;
    for(int i=0;(i*2020)<=n;i++)
   	{
        int temp = i * 2020;
        int left = n - temp;
        if(left%2021 == 0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}

int main() {

	ll t;
	cin>>t;
	while(t--)
	{
	    newyear();
	}
}
