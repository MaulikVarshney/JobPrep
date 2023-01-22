#include<bits/stdc++.h>
using namespace std;
void count(int n){
    int c=1;
    while(n>0){
        c++;
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