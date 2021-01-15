//https://www.hackerrank.com/challenges/vector-sort/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n ; i++){
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    for(int i=0; i<v.size() ; i++){
        cout<<v[i]<<"\t";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
