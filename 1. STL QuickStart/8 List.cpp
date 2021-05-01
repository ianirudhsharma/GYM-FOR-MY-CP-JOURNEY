#include <iostream>
#include<list>

//in form of doubly linked list we cannot access like in vector
using namespace std;

int main() {
	// your code goes here
	list <int>l1{1,2,3,10,8,5};
	//Different datatype
	list <string>l2{"apple","guava","mango","banana"};
	l2.push_back("pineapple");
	//for sorting
	l2.sort();
	
	//evern jo sort hum padhe wo bhi chal jayega
	for(auto x:l2){
	    cout<<x<<" ";
	}
	cout <<endl;
	
	l2.reverse();
	
	
	//pop front
	cout<<l2.front()<<endl;
	l2.pop_front();
	
	
	for(auto x:l2){
	    cout<<x<<" ";
	}
	cout <<endl;
	
	l2.push_front("kiwi");
	cout<<l2.back()<<endl;
	l2.pop_back();
	
	//Iterate over the list and print the data
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<< (*it)<<" -> ";
    }
    cout<<endl;
    
    cout<<l2.size();
    
    //here [2] not work instead do itr++ itr++
    // as its a ll indexing doesnt work but itr handle it internally
    
    
    //remove a fruit
    string f="mango";
    //remove all occurence
    l2.remove(f);
    cout<<endl;
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    
    //erase one or more elements
    
    auto it=l2.begin();
    it++;
    it++;
    
    l2.erase(it);
    
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    
    
	
	return 0;
}
