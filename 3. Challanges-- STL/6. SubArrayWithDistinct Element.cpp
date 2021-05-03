#include<bits/stdc++.h>
using namespace std;
#define mod             1000000007
#define int             long long

int sumoflength(int arr[], int n)
{
    
    unordered_set<int> s;
 
   
    int j = 0, ans = 0;
 
    // Fix starting point
    for (int i=0; i<n; i++)
    {
        
        while (j < n && s.find(arr[j]) == s.end())
        {
            s.insert(arr[j]);
            j++;
        }
 
        
        ans = (ans + (((j - i) * (j - i + 1))/2)%mod)%mod;
 
        
        s.erase(arr[i]);
    }
 
    return ans;
}
 

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << sumoflength(arr, n) << endl;
 return 0;
}