#include<bits/stdc++.h>
using namespace std;
void count(int n){
    int c=0;
    while(n>0){
        int d = n%10;
        c = c*10 + d;
        n = n/10;
    }
    cout<<c;
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    count(n);
    return 0;
}