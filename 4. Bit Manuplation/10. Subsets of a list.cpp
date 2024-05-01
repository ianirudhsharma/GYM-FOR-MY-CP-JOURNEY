// C++ program to find all subsets of given set. Any
// repeated subset is considered only once in the output
#include <bits/stdc++.h>
using namespace std;
 
// Utility function to split the string using a delim. Refer -
// http://stackoverflow.com/questions/236129/split-a-string-in-c
vector<string> split(const string &s, char delim)
{
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
        elems.push_back(item);
 
    return elems;
}
 
// Function to find all subsets of given set. Any repeated
// subset is considered only once in the output
void printPowerSet(int arr[], int n) {
    set<vector<int>> subsets;

    for (int i = 0; i < (1 << n); ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        subsets.insert(subset);
    }

    for (const auto& subset : subsets) {
        for (const auto& element : subset) {
            cout << element << " ";
        }
        cout << endl;
    }
}
 
// Driver code
int main()
{
    int arr[] = { 10, 12, 12 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printPowerSet(arr, n);
 
    return 0;
}
