#include<bits/stdc++.h>
using namespace std;

void Swap(int a, int b) {
        a = a^b;
        b = a^b;
        a = a^b;
        cout<<a<<b;
}
 int main(){
    int a, b;
    cin>>a>>b;
    Swap(a,b);
    return 0;
 }

