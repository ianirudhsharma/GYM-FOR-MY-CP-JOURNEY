#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
int main() {
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll count=0;
		ll a,b;
		cin>>a>>b;
		while(a<=b){
			count+=__builtin_popcountll(a);

			a++;
		}
		cout<<count<<endl;
	}
	return 0;
}