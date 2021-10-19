#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

	 ll t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        vector<int> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        for (int j = 0; j < k; j++) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] != 0)
                    count++;
 
            }
            sum += count * 2;
        }
 
        cout << sum;
 
        cout << '\n';
    }
}
