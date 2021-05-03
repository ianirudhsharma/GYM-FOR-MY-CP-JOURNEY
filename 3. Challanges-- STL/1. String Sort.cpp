#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

bool mysort(string &s1, string &s2){
	int minL=min(s1.size(),s2.size());
	bool flag=true;
	for(int i=0;i<minL;i++){
		if(tolower(s1[i])!=tolower(s2[i])){
		  
			flag=false;
			break;
		}
	}

	if(flag==true){
		return s1.size()>=s2.size();
	}
	return s1<s2;
}
int main() {
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,mysort);
	for(string i:s){
		cout<<i<<endl;
	}
	return 0;
}