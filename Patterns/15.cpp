#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=a;i>0;i--){
        for(char j='A';j<A+i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter upper limit you want = ";
    cin>>n;
    print(n);
    return 0;
}