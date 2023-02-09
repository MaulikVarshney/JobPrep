#include<bits/stdc++.h>
using namespace std;
void printNos(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printNos(n-1);
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    printNos(n);
    return 0;
}