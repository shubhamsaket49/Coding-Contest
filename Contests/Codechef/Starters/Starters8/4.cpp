#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll prime[1000001] = { 0 };
ll k[1000001] = { 0 };
void Sieve()
{

	for (ll i = 1; i < 1000001; i++)
		k[i] = i;

	for (ll i = 2; i < 1000001; i++) {

		if (prime[i] == 0)
			for (ll j = i; j < 1000001; j += i) {

				prime[j] = 1;

				while (k[j] % (i * i) == 0)
					k[j] /= (i * i);
			}
	}
}

ll countP(ll arr[], ll n)
{
	unordered_map<ll, ll> f;
	for (ll i = 0; i < n; i++) {
		f[k[arr[i]]]++;
	}

	ll sum = 0;
	for (auto i : f) {
		sum += ((i.second - 1) * i.second) / 2;
	}

	return sum;
}
void solve(){
    ll n; 
    cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++) 
      cin >> a[i];
    ll x = countP(a, n);
    ll t = (n*(n-1))/2;
    ll ans = t - x;
    cout << ans;
}
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    Sieve();
    int tt; 
    cin >> tt;
    while(tt--){
        solve();
        cout << "\n";
    }
    return 0;
}
