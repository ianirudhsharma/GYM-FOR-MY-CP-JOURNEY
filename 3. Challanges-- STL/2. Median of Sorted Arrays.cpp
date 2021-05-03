#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
float median(vector<int> arr1, vector<int> arr2) {
   vector<int> arr3(arr1.size() + arr2.size());
   merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
   sort(arr3.begin(), arr3.end());
   int len = arr3.size();
   int mid = len/2;
   return (arr3[mid] + arr3[mid-1])/2;
}
int main() {
   vector<int> arr1;
   vector<int> arr2;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr1.push_back(x);
   }
   
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr2.push_back(x);
   }
   
   cout << median(arr1, arr2);
   return 0;
}