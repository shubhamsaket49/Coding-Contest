#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n; 
	cin>>n;
    int arr[n];
    deque<int>quiz;
    for(int i=0; i<n; i++) 
	   cin>>arr[i];
    quiz.push_back(arr[0]);
    for(int i=1;i<n;i++)
	{
        if(arr[i]<quiz.front()) 
			quiz.push_front(arr[i]);
        else 
		   quiz.push_back(arr[i]);
    }
    for(int i=0;i<n;i++) 
		cout<<quiz[i]<<" ";
}
}
