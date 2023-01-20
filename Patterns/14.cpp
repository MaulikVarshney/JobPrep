#include<bits/stdc++.h>
using namespace std;
void print(int a){
    for(int i=1;i<=a;i++){
        for(char j='A';j<'A'+i;j++){
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