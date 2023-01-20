#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=a;i>0;i--){
        for(int j=i;j>0;j--){
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


