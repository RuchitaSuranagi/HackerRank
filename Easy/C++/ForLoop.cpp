//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a, b, i;
    string c[]={"", "one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for(i=a ; i<=b ; i++){
        if(i<=9){
            cout<<c[i]<<endl;
        }
        
        else { 
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else cout<<"odd"<<endl;
        }
    }
    
    
    
    return 0;
}
