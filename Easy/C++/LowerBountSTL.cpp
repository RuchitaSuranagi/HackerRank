#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,q,y,index;
    cin>>n;
    
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    while(q>0){
        cin>>y;
        vector<int>::iterator low,up;
        low=lower_bound (v.begin(), v.end(), y);
        index=low-v.begin();
        if(v[index]==y){
            cout << "Yes "<< index+1 << endl;
            }
        else cout<<"No "<< index+1 << endl;
        q--;
    }
    
    return 0;
}
