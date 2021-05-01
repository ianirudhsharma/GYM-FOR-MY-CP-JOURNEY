
// CPP program to demonstrate working of unordered_map
// for user defined data types.
#include <bits/stdc++.h>
using namespace std; 
  
struct Person {
    string first, last;
  
    Person(string f, string l)
    {
        first = f;
        last = l;
    }
  
    bool operator==(const Person& p) const
    {
        return first == p.first && last == p.last;
    }
    //checking if the person is already present
};
  
class MyHashFunction {
public:
  
    // We use predfined hash functions of strings
    // and define our hash function as XOR of the
    // hash values.
    int operator()(const Person& p) const
    {
        return p.first.size()+p.last.size();
    }
};
  
// Driver code
int main()
{
    unordered_map<Person, int, MyHashFunction> um;
    Person p1("kartik", "kapoor");
    Person p2("Ram", "Singh");
    Person p3("Jam", "Pingh");
  
    um[p1] = 100;
    um[p2] = 200;
    um[p3] = 100;
    um[p3]=30;
  
    for (auto e : um) {
        cout << "[" << e.first.first << ", " 
             << e.first.last
             << "] = > " << e.second << '\n';
    }
  
    return 0;
}