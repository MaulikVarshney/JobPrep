#include<bits/stdc++.h>
using namespace std;

void print(int a){
    for(int i=0;i<a;i++){
        for(int j=1;j<=i+1;j++)cout<<j;
        for(int k=1;k<=2*(a-i)-2;k++)cout<<" ";
        for(int l=i+1;l>0;l--)cout<<l;
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