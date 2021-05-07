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
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
bool isOdd(int n){
    return n&1;
}

int getBit(int n,int i){
    int x=1<<i;
    return n&x?1:0;
    
    
}

void setBit(int &n,int i){
    int x=1<<i;
    n=n|x;
}


void clearBit(int &n,int i){
    int x=1<<i;
    x=~x;
    n=n&x;
}

void updateBit(int &n,int i,int v){
    
    if(v==0){
        clearBit(n,i);
    }else if(v==1){
        setBit(n,i);
    }else{
        cout<<"Invalid";
        return ;
    }
    
}

int32_t main()
{
    c_p_c();
    cout<<isOdd(5)<<endl;
    cout<<isOdd(2)<<endl;
    int x=0;
    setBit(x,0);
    updateBit(x,2,1);
    updateBit(x,0,1);
    cout<<x<<endl;
    updateBit(x,0,0);
    cout<<x<<endl;
    
    clearBit(x,2);
    cout<<x<<endl;
    
    
    
    
    
    return 0;
}