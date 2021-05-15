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
 
 
 
int32_t main()
{
    map<int,int>m;
    
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    int x;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=a[i-1]+(i-m[x]);
        m[x]=i;
        sum+=a[i];
        
    }
    
    double ans=(1.0*(2*sum-n))/(n*n);
    cout<<ps(ans,6)<<endl;
    
    
    return 0;
}