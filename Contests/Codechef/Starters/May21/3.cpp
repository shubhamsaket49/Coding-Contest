#include<bits/stdc++.h>
using namespace std;
int frequency(int arr1[], int k){
   bool arr[k];
   for(int i=0;i<k;i++){
      arr[i] = 0;
   }
   for(int i=0; i<k; i++){
      if(arr[i]== 1){
         continue;
      }
      int count = 1;
      for(int j = i+1; j<k; j++){
         if (arr1[i] == arr1[j]){
            arr[j] = 1;
            count++;
         }
      }
   } }
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,count;
		cin>>n>>m>>k;
		int *arr1= new int[k];
		for(int i=0;i<k;i++)
		     cin>>arr1[k];
		   vector<int>v;
		 frequency(arr1,k);
		 for(int i=0;i<k;i++)
		 {
		     if(count >2)
		      {
		          v.push_back(arr1[i]);
		      }
		 }
		 sort(v.begin(),v.end());
		 vector<int>:: iterator it;
		 for(it=v.begin();it!=v.end();it++)
		     cout<<*it<<" "<<endl;
	}
}
