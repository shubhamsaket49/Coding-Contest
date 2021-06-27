#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int a, b, c, d, k;
	    cin >> a >> b >> c >> d >> k;
	    int aux = abs(c - a) + abs(d - b);
	    if(k < aux) cout << "NO";
	    else if(k == aux) cout << "YES";
	    else if(aux % 2 == 0 && k % 2 == 0) cout << "YES";
	    else if(aux % 2 != 0 && k % 2 != 0) cout << "YES";
	    else cout << "NO";
	    cout << "\n";
	}
	return 0;
}
