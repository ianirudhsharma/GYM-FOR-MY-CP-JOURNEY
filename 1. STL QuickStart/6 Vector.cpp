#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int > a;
    vector <int> b{5,10};
    vector <int> c(b.begin(),b.end());
    vector<int> d{1,2,3,16,14};

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }

    cout<<endl;

    for(auto i=d.begin();i!=d.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    for(int i:d){
        cout<<i<<" ";

    }
    cout<<endl;
    //understand the difference at memory level
    cout<<endl;
    cout<<d.size()<<" "<<d.max_size()<<" "<<d.capacity()<<endl;
    b.push_back(10);
    b.push_back(10);
    b.push_back(10);
    cout<<b.size()<<" "<<b.max_size()<<" "<<b.capacity()<<endl;



    


    
      

    return 0;
}
