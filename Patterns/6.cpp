#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=a;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number you want = ";
    cin>>n;
    print(n);
    return 0;
}


