#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=a;i>0;i--){
        for(int j=0;j<=a-i;j++)cout<<" ";
        for(int k=2*i-1;k>0;k--)cout<<"*";
        cout<<endl;
}
}

int main(){
    int n;
    cout<<"Enter upper limit you want = ";
    cin>>n;
    print(n);
    return 0;
}