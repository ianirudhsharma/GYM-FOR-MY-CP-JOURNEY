#include <iostream>
using namespace std;
#include <queue>
#include <cstring>
#include <vector>
class Person{
  public:
    string name;
    int age;
    Person(){
        
    }
    
    Person(string n,int a){
        name=n;
        age=a;
    }
};


class PersonCompare{
    public:
        bool operator()(Person A,Person B){
            // cout<<"Compareing "<<A.age<<" with "<< B.age<<endl;
            return A.age<B.age; 
        }
};

int main() {
    
	// your code goes here
	int n;
	cin>>n;
	priority_queue<Person,vector<Person>,PersonCompare>pq;
	for(int i=0;i<n;i++){
	    string name;
	    int age;
	    cin>>name>>age;
	    Person p(name,age);
	    pq.push(p);
	}
	
	int k=3;
	for(int i=0;i<3;i++){
	    Person p=pq.top();
	    pq.pop();
	    cout<<p.name<<" "<<p.age<<endl;
	}
	return 0;
}

//isme dikne me ulta kaam kar rha h comparator