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
    int total=0;
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
        total^=a[i];
    }
    
    int guess=1;
    
    
    while(true){
        
        if((guess & total )!=0){
            // cout<<guess <<" "<<total<<endl;
            // cout<<(guess & total)<<endl;
            break;
        }
        guess=guess<<1;
        
    }
    
    int num1=0;
    for(int i=0;i<t;i++){
        if(a[i]&guess){
            num1^=a[i];
        }
    }
    
    int num2=total^num1;
    
    if(num1<num2){
        cout<<num1<<" "<<num2<<endl;
    }else{
        cout<<num2<<" "<<num1<<endl;
    }
    
   
    return 0;
}