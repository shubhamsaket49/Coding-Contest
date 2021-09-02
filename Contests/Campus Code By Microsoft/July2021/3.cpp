#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
bool areAnagram(string str1, string final)
{

    int n = str1.length();
    int m = final.length();
    if (n != m)
        return false;

    sort(str1.begin(), str1.end());
    sort(final.begin(), final.end());
        if (str1 != final)
            return false;
 
    return true;
}
 
int main()
{
	int flag=0;
	string final;
	cin>>final;
	vector<string>v;
	int n;
	cin>>n;
	while(n--)
	{
	string str1;
    cin>>str1;
    if(areAnagram(str1,final))
       v.push_back(str1);
   }
   sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++)
	{
        cout<<v[i]<<" ";
	
	
	}
}
