#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		string temp1,temp2;
		ll count=0;
		for(ll i=0;i<n;i++){
			for(ll j=i+1;j<n;j++){
				temp1=arr[i];
				temp2=arr[j];
				swap(temp1[0],temp2[0]);
				if(temp1[0]==temp2[0]){	
				    
				}
				else if(temp1==temp2){
				   
				}
				else if((!(binary_search(arr,arr+n,temp1)))&&(!binary_search(arr,arr+n,temp2))){
					count+=2;
				}
			}
		}
		cout<<count<<"\n";
	}
}
