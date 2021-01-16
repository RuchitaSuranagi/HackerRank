//https://www.hackerrank.com/challenges/cpp-sets/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, x, y;
    cin>>n;
    
    set<int>sx;
    
    for(int i=0; i<n; i++){
        cin>>y>>x;
        if(y == 1){
            sx.insert(x);
        }
        
        if(y == 2){
            sx.erase(x);
        }
        
        if(y == 3){
            set<int>::iterator itr=sx.find(x);
            if(itr == sx.end()){
                    cout<<"No"<<endl;
                } else cout<<"Yes"<<endl;
            }
        } 
    return 0;
}
