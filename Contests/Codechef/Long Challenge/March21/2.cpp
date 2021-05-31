#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t=0;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count = 0, j=0;
		for(int i=0;i<s.length();){
			if(s[i]=='1') count++;
			for(j=i+1;j<s.length();){
				if(s[j]==s[i]) j++;
				else break;
			}
			i=j;
		}
		cout<<count<<endl;
	}
}
