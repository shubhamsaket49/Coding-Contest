#include <iostream>
#define ll long long int
using namespace std;

int main() {
	int i,n,T;
	cin>>T;
	while(T--)
{
        ll n;
        cin>>n;
        if(n&1 == 1){
            cout << 0 << " " << n << endl;
        }
        else{
            cout << n/2 << " " << n/2 << endl;
        }
    }
}

