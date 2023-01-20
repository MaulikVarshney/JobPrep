#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=1;i<=2*a-1;i++){
        int stars=i;
        if(i > a)stars = 2*a - i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
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


