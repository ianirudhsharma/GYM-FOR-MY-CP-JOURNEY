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
 

int productGrabber(int n,int * primes){
    int count=0;
    int ans=1;
    while(n){
        
        if(n&1){
            ans*=primes[count];
        }
        n=n>>1;
        count++;
    }
    return ans;
}

 
int32_t main()
{
    //between 1-20 primes
    int primes[]={2,3,5,7,11,13,17,19};
    // cout<<productGrabber(7,primes)<<endl;
    
    w(t){
        int n;
        cin>>n;
        int ans=0;
        // cout<<productGrabber(255,primes)<<endl;
        
        for(int i=1;i<=((1<<8)-1);i++){
            // 0 not allowed warna sab 1 se divide ho jayege 
            int product= productGrabber(i,primes);
            
            if((setbits(i)%2)==0){
                ans-=(n/product);
                
            }else{
                ans+=(n/product);
                
            }
        }
        cout<<ans<<endl;
        
    }
    
    
    return 0;
}