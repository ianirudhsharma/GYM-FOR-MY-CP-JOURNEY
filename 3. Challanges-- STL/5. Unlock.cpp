#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

int main() {
	// your code goes here
	int N,k;
	cin>>N>>k;
	map<int ,int> position;
	map<int,int> A;
	
	for(int i=0;i<N;i++){
	    int x;
	    cin>>x;
	    A[i]=x;
	    position[x]=i;
	    
	}
	
	int swaping=0;
	int i=0;
	while(swaping<k && i<N){
	    if(A[i]!=N-i){
	        swaping++;
	        int x=position[N-i];
	        swap(A[i],A[x]);
	        position[A[i]]=i;
	        position[A[x]]=x;
	    }
	    i++;
	}
	
	for(auto i:A){
	    cout<<i.second<<" ";
	}
	return 0;
}