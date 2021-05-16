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

class Graph{
    int V;
    list<pair<int,int>>*l;
public:
    Graph(int v){
        V=v;
        l=new list<pair<int,int>>[V];
    }
    
    void addEdge(int u,int v,int cost,bool bidir=true){
        l[u].push_back(make_pair(v,cost));
        if(bidir){
            l[v].push_back(make_pair(u,cost));
        }
    }
    
    int dfsHelper(int node,bool *visited,int *count,int &ans){
        visited[node]=true;
        count[node]=1;
        for(auto neighbour:l[node]){
            int v=neighbour.first;
            if(!visited[v]){
                count[node]+=dfsHelper(v,visited,count,ans);
                ans+=2*min(count[v],V-count[v])*neighbour.second;
            }
        }
        return count[node];
        
        
    }
    
    int dfsMain(){
        bool *visited=new bool[V]{0};
        int *count=new int[V]{0};
        int ans=0;
        dfsHelper(0,visited,count,ans);
        return ans;
    }
};
 
int32_t main()
{
    c_p_c();
    Graph g(4);
    g.addEdge(0,1,3);
    g.addEdge(1,2,2);
    g.addEdge(3,2,2);
    cout<<g.dfsMain();
    return 0;
}