#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N,K,X,Y,target,jump,curr,count=0,flag=0,i;
		cin>>N>>K>>X>>Y;
		curr=X;
		target=Y;
		jump=K;
		i=1;
		while(true){
			if(curr==target){
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
			curr=(curr+jump)%N;
			if(curr==0)
			curr=N;
			count++;
			if(count>N)
			break;
		}
		if(!flag)
		cout<<"NO"<<endl;
	}
}
