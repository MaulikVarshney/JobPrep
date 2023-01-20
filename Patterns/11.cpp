#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=1;i<=a;i++){
        bool flag;
        if(i%2==0)flag = 0;
        else flag = 1;
        for(int j=1;j<=i;j++){
            cout<<flag;
            flag = !flag;
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


