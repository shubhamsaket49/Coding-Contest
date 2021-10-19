#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin >> t;
	while(t--){
	    int n, l = 0, u = 0, count = 0;
	    cin >> n;
    	string s[n];
        for(int i=0; i<n; i++) cin >> s[i];
        for(int i=0; i<n; i++){
            l = 0; u = 0;
            for(int j=0; j<s[i].size(); j++){
                if(s[i][j] >= 'a' && s[i][j] <= 'm') l++;
                if(s[i][j] >= 'N' && s[i][j] <= 'Z') u++;
            }
            if(l == s[i].size()) count++;
            if(u == s[i].size()) count++;
        }
        if(count == n) cout << "YES";
        else cout << "NO";
        cout << "\n";
	 }
	return 0;
}
