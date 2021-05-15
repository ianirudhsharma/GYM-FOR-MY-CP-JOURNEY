#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 


int CountContribution(int n,int k){
    int ans=0;
    int helper=k;
    while(n>=helper){
        ans+=(n/helper);
        helper*=k;
    }
    return ans;
    
    
}

int minXCount(int n,int k){
    
    map<int,int> m;
    
    for(int i=2;i<=sqrt(k);i++){
        while(k%i==0){
            m[i]++;
            k=k/i;
        }
        
        
    }
    
    if(k>1){
        m[k]++;
    }
    
    int min=INT_MAX;
    for(auto i:m){
        int count=CountContribution(n,i.first);
        int possible=count/i.second;
        if(possible<min){
            min=possible;
        }
    }
    
    return min;

}
 

int32_t main()
{
    w(t){
        int n,k;
        cin>>n>>k;
        cout<<minXCount(n,k)<<endl;
    }
    return 0;
}