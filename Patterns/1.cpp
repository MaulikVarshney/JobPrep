#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of * you want = ";
    cin>>n;
    print(n);
    return 0;
}


