#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void leftRotate(vector<int> &arr, int d, int n)
{
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n; 
	cin>>n;
    vector<int> arr(n), brr(n);
    for(int i=0; i<n; i++) 
	{
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr.begin(), brr.end());
    int count = 0;
    vector<int> v;
    for(int i=0; i<n-1; i++)
	{
        if(arr[i]==brr[i]) 
		continue;
        count++;
        v.push_back(i+1); 
		v.push_back(n);
        int x = brr[i], idx;
        for(int j=i; j<n; j++)
		{
            if(arr[j] == brr[i])
			{
                idx = j;
                break;
            }
        }
        int d = idx-i;
        v.push_back(d);
        vector<int> temp;
        for(int k=i; k<n; k++) temp.push_back(arr[k]);
        leftRotate(temp, d, n-i);
        int y = -1;
        for(int k=i; k<n; k++) arr[k] = temp[++y];
        temp.clear();
    }
    cout <<count<<endl;
    for(int i=0;i<3*count;i+=3) 
	   cout << v[i] << " " << v[i+1] << " " << v[i+2] << endl;
}
}
