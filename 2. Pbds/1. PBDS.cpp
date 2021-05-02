#include <iostream>
using namespace std;


// Headers files
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define pbds tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


int main(){

    pbds p;

    //actually sets inside
    p.insert(5);
    p.insert(1);
    p.insert(2);
    p.insert(1);

    cout << *(p.find_by_order(1)) << endl;
    cout<< p.order_of_key(2)<<endl;
    //if not present will return the order it will be at if inserted
    cout<< p.order_of_key(0)<<endl;

     if (p.find(2) != p.end())
        p.erase(p.find(2));

      cout<<p.size()<<endl;













    return 0;
}

