#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    vector<pair<int, int>> A(N); // pair of (value, original_index)
    
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A[i] = {x, i};
    }
    
    sort(A.begin(), A.end(), greater<>()); // Sort in descending order of values
    
    for(int i = 0; i < N && k > 0; i++) {
        if (A[i].second != N - i - 1) {
            swap(A[i], A[A[i].second]);
            k--;
        }
    }
    
    for(auto& elem : A) {
        cout << elem.first << " ";
    }
    
    return 0;
}
