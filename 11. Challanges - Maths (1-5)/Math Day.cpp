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
#define mode             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
int power( int x, int y,int mod ) 
{ 
    int res = 1;
    x = x % mod;
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % mod;;
        y = y>>1; 
        x = (x*x) % mod;;   
    } 
    return res; 
}
 
int32_t main()
{
    w(t){
        int A,N,P;
        cin>>A>>N>>P;
        A=A%P;
        for(int i=2;i<=N;i++){
            A=power(A,i,P);
        }
        cout<<A<<endl;
        
    }
    return 0;
}