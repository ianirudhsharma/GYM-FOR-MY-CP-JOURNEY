#include <iostream>
using namespace std;


// Headers files
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define pbds tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    pbds p;

   //assuming all unique and if not unique make pair simple
    int inversion_count=0;
    for(int i=0;i<n;i++){
        inversion_count+=(p.size()- p.order_of_key(a[i]));
        p.insert(a[i]);

    }

    cout<<inversion_count<<endl;


    return 0;
}

