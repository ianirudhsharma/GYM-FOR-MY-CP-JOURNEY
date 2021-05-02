#include <iostream>
using namespace std;


// Headers files
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define pbds tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>


int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int c[n];
    for(int i=0;i<n;i++){
        c[i]=a[i]-b[i];
    }

    pbds pb;
    long long int ans=0;




   
    for(int i=0;i<n;i++){
        ans+=(pb.size()- pb.order_of_key({-c[i],10000000}));

        pb.insert({c[i],i});

    }

    cout<<ans<<endl;


    return 0;
}

