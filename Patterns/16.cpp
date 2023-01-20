#include<bits/stdc++.h>
using namespace std;
char k='A';
void print(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<k;
        }
        k++;
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