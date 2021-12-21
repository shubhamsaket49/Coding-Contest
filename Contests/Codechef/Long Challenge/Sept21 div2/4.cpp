#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, x, maxe = INT_MAX; 
	cin >> n >> x;
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    int a[n];
    int mx = -1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        m1[a[i]] ++;
        if(m1[a[i]] > mx) mx = m1[a[i]];
        m2[a[i] ^ x] ++;
    }
    if(x == 0){
        cout << mx << " " << 0;
        return;
    }
    unordered_map<int, int> m;
    for(auto it : m1) m[it.first] += it.second;
    for(auto it : m2) m[it.first] += it.second;
    for(auto it : m){
        if(it.second > mx) {
            mx = it.second;
            maxe = m2[it.first];
        }
        else if(it.second == mx) maxe = min(maxe, m2[it.first]);
    }
    cout << mx << " " << maxe;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
}
