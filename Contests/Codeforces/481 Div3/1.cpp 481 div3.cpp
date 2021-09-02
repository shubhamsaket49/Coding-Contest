#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int arr[10000] = {0};
	int	brr[10000] = {0};
	vector<int>v(0, 0);
    cin >> n;
	for (int i = 0; i < n; i++) 
		cin>>brr[i];
		
	for (int i = n-1; i >=0; i--) {
    
    	if (!arr[brr[i]]) {
        v.push_back(brr[i]);
    }
    arr[brr[i]]++;
    
}
	cout << v.size()<<endl;
	for (int i = v.size()-1; i >=0; i--) 
    	cout << v[i]<<" ";
	
}
