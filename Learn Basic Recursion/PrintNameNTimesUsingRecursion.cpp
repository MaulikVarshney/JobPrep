#include<bits/stdc++.h>
using namespace std;
void printGfg(int n){
    if(n==0){
        return;
    }
    printGfg(n-1);
    cout<<"GFG ";
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    printGfg(n);
    return 0;
}