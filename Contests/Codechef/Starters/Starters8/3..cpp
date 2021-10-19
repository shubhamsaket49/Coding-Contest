#include "bits/stdc++.h"
#define ll long ling
using namespace std;
void solve(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int turn = 0;
    if((x2 < x1 && x3 > x2) || (y2 < y1 && y3 > y2)) {cout <<"NO"; return;}
    if((x2 > x1 && x3 < x2) || (y2 > y1 && y3 < y2)) {cout <<"NO"; return;}
    if((x1 != x2 && y1 != y2) && (x2 != x3 && y2 != y3)) {cout <<"NO"; return;}
    if(x1 != x2 && y1 != y2) turn ++;
    if(x2 != x3 && y2 != y3) turn++;
    
    if(turn <= 1) cout << "YES";
    else cout << "NO";
}
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; 
	cin >> t;
    while(t--)
	{
        solve();
        cout << "\n";
    }
    return 0;
}
