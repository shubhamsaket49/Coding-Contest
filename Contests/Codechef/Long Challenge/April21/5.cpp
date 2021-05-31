#include<bits/stdc++.h>
const int m=3 ;
using namespace std;

int countSubsquare(int arr[][m], int n, int k)
{
    int dp[n + 1][m + 1];
  
    memset(dp, 0, sizeof(dp));
  
   
    for (int i = 0; i < n; i++) {
  
        for (int j = 0; j < m; j++) {
  
            dp[i + 1][j + 1] = arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] += dp[i - 1][j]+ dp[i][j - 1]- dp[i - 1][j - 1];
        }
    }
  
    // Stores the answer
    int cnt = 0;
  
    for (int i = 1; i <= n; i++) {
  
        for (int j = 1; j <= m; j++) {
            int lo = 1;
            int hi = min(n - i, m - j) + 1;
            bool found = false;
  
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                int ni = i + mid - 1;
                int nj = j + mid - 1;
                int sum = dp[ni][nj]- dp[ni][j - 1]- dp[i - 1][nj]+ dp[i - 1][j - 1];
                int avg= sum /(i * j);
  				cout<<avg<<endl;
                if (avg >= k) {
                    if (avg == k) {
                        found = true;
                    }
  
                    hi = mid - 1;
                }
                else {
                    lo = mid + 1;
                }
            }
            if (found == true) {
                cnt++;
            }
        }
    }
    return cnt;
}
  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>k;
		int arr[n][3];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
	
		
		 cout << countSubsquare(arr, n, k);
  
		
		
	}
	
	
	
}
